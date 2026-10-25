import struct, json, uuid, os, sys
ROOT = r'C:\Windows\Speech_OneCore\Engines\TTS\en-US'
DESK = r'C:\Windows\Speech\Engines\TTS\en-US'

def guid(b, off=0):
    return str(uuid.UUID(bytes_le=b[off:off+16])).upper()

def parse_apm(path):
    b=open(path,'rb').read()
    assert b[:4]==b'APM ', path
    sig1, sig2 = struct.unpack_from('<QQ', b, 4)
    size = struct.unpack_from('<I', b, 0x14)[0]
    p = b[0x18:]
    f = struct.unpack_from('<IIHHIIIIIIIIIII', p, 0)
    keys=['version','checksum','lcid','revision','flags','sample_rate','sample_width','frame_shift',
          'question_offset','question_size','model_offset','model_size','pdf_offset','pdf_size',
          'ext_offset','ext_size','reserved']
    hdr=dict(zip(keys,f)); hdr['signature1']=f'{sig1:016X}'; hdr['signature2']=f'{sig2:016X}'
    hdr['payload_size']=size; hdr['file_size']=len(b)
    # section checks
    hdr['sections']={
      'question':[hdr['question_offset'],hdr['question_size']],
      'model':[hdr['model_offset'],hdr['model_size']],
      'pdf':[hdr['pdf_offset'],hdr['pdf_size']],
    }
    hdr['model_set_head']=list(struct.unpack_from('<II', b, hdr['model_offset']))
    hdr['float_triples']=[struct.unpack_from('<fff', b, hdr['model_offset']+0x2415D4 + i*12) for i in range(3)] if False else None
    return hdr

def parse_bep(path):
    b=open(path,'rb').read()
    assert b[:4]==b'BEPT', path
    g=guid(b,4)
    rev, checksum, psize = struct.unpack_from('<III', b, 0x14)
    count = struct.unpack_from('<I', b, 0x24)[0]
    recs=[]; base=0x28+count*12
    for i in range(count):
        rid,off,sz=struct.unpack_from('<Iii', b, 0x28+i*12)
        recs.append({'id':rid,'offset':off,'size':sz,'end':base+off+sz})
    return {'guid':g,'revision':rev,'checksum':checksum,'payload_size':psize,'file_size':len(b),
            'count':count,'data_base':base,'records':recs,
            'max_end':max(r['end'] for r in recs)}

def parse_nus(path):
    b=open(path,'rb').read()
    magic=struct.unpack_from('<I',b,0)[0]
    g=guid(b,4)
    psize=struct.unpack_from('<Q',b,0x1c)[0]
    count,units,stroff,strlen=struct.unpack_from('<IIII',b,0x24)
    return {'magic':magic,'guid':g,'payload_size':psize,'file_size':len(b),
            'feature_count':count,'unit_count':units,'string_offset':stroff,'string_length':strlen}

def parse_dat(path, depth=0, maxdepth=2):
    b=open(path,'rb').read()
    out=[]
    off=0
    while off+0x28<=len(b):
        g1=guid(b,off); g2=guid(b,off+0x10); sz=struct.unpack_from('<Q',b,off+0x20)[0]
        if sz==0 or off+0x28+sz>len(b): break
        rec={'id':g1,'type':g2,'size':sz,'offset':off}
        if depth<maxdepth and sz>=0x28:
            # nested object table heuristic: parse payload recursively
            try: rec['children']=parse_dat_bytes(b[off+0x28:off+0x28+sz],depth+1,maxdepth)
            except Exception as e: rec['children_error']=str(e)
        out.append(rec)
        off += 0x28+sz
        off += (8-(sz&7))&7
    return out

def parse_dat_bytes(b,depth,maxdepth):
    out=[]; off=0
    while off+0x28<=len(b):
        g1=guid(b,off); g2=guid(b,off+0x10); sz=struct.unpack_from('<Q',b,off+0x20)[0]
        if sz==0 or off+0x28+sz>len(b): break
        rec={'id':g1,'type':g2,'size':sz,'offset':off}
        if depth<maxdepth and sz>=0x28:
            try: rec['children']=parse_dat_bytes(b[off+0x28:off+0x28+sz],depth+1,maxdepth)
            except Exception as e: rec['children_error']=str(e)
        out.append(rec); off+=0x28+sz; off+=(8-(sz&7))&7
    return out

res={
 'apm_zira_onecore':parse_apm(os.path.join(ROOT,'M1033Zira.APM')),
 'apm_david_onecore':parse_apm(os.path.join(ROOT,'M1033David.APM')),
 'apm_zira_desktop':parse_apm(os.path.join(DESK,'M1033ZIR.APM')),
 'bep_zira':parse_bep(os.path.join(ROOT,'M1033Zira.BEP')),
 'bep_david':parse_bep(os.path.join(ROOT,'M1033David.BEP')),
 'nus_zira_speechux':parse_nus(os.path.join(ROOT,'M1033Zira.SPEECHUX.NUS')),
 'nus_zira_tbt':parse_nus(os.path.join(ROOT,'M1033Zira.TBT.NUS')),
 'dat_top':parse_dat(os.path.join(ROOT,'MSTTSLocEnUS.dat')),
}
json.dump(res,open(r'artifacts\format_probe.json','w'),indent=2)
print('wrote artifacts/format_probe.json')
