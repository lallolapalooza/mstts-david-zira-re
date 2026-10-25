import argparse, hashlib, json, os, struct, sys, wave

def sha256_file(p):
    h=hashlib.sha256()
    with open(p,'rb') as f:
        for b in iter(lambda:f.read(1<<20), b''): h.update(b)
    return h.hexdigest()

def wav_pcm(p):
    b=open(p,'rb').read()
    if b[:4]!=b'RIFF' or b[8:12]!=b'WAVE': raise ValueError('not RIFF/WAVE')
    i=12
    while i+8<=len(b):
        cid=b[i:i+4]; sz=struct.unpack_from('<I',b,i+4)[0]; data=b[i+8:i+8+sz]
        if cid==b'data': return data
        i+=8+sz+(sz&1)
    raise ValueError('no data chunk')

ap=argparse.ArgumentParser()
ap.add_argument('--manifest', default=os.path.join(os.path.dirname(__file__),'..','samples','MANIFEST.json'))
ap.add_argument('--candidate', default=None, help='candidate samples root (default: archive itself)')
ap.add_argument('--pcm-only', action='store_true', help='compare decoded PCM, ignoring WAV headers')
ap.add_argument('--quiet', action='store_true')
a=ap.parse_args()
man=json.load(open(a.manifest,encoding='utf-8'))
archive_dir=os.path.dirname(os.path.abspath(a.manifest))
cand=a.candidate or archive_dir
total=match=0; failures=[]
for voice,v in man['voices'].items():
    vm=0; vn=0
    for s in v['samples']:
        total+=1; vn+=1
        p=os.path.join(cand,voice,s['file'])
        if a.pcm_only:
            try: ok = hashlib.sha256(wav_pcm(p)).hexdigest()==hashlib.sha256(wav_pcm(os.path.join(archive_dir,voice,s['file']))).hexdigest()
            except Exception: ok=False
        else:
            ok = os.path.exists(p) and sha256_file(p)==s['sha256']
        if ok: match+=1; vm+=1
        else: failures.append(f'{voice}/{s["file"]}')
    if not a.quiet: print(f'{voice:14s} {vm:3d}/{vn:3d}  {100.0*vm/vn:7.3f}%')
if not a.quiet:
    print(f'{"TOTAL":14s} {match:3d}/{total:3d}  {100.0*match/total:7.3f}%')
    if failures: print('mismatches:', ', '.join(failures[:20]), ('...' if len(failures)>20 else ''))
sys.exit(0 if match==total else 1)
