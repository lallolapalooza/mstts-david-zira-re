import hashlib, json, os, subprocess
import pefile

ROOT = r'C:\Users\[user]\Downloads\mstts-re'
FILES = [
    r'C:\Windows\System32\speech_onecore\engines\tts\MSTTSEngine_OneCore.dll',
    r'C:\Windows\System32\speech_onecore\engines\tts\MSTTSLoc_OneCore.dll',
    r'C:\Windows\System32\Speech\Engines\TTS\MSTTSEngine.dll',
    r'C:\Windows\System32\Speech\Engines\TTS\MSTTSLoc.dll',
    r'C:\Windows\System32\Speech\Common\sapi.dll',
    r'C:\Windows\System32\Windows.Media.Speech.dll',
] + [rf'C:\Windows\Speech_OneCore\Engines\TTS\en-US\{n}' for n in [
    'M1033David.APM','M1033David.BEP','M1033David.INI',
    'M1033Zira.APM','M1033Zira.BEP','M1033Zira.INI',
    'M1033Zira.SPEECHUX.NUS','M1033Zira.TBT.NUS',
    'MSTTSLocEnUS.dat','MSTTSLocEnUS.INI',
    'M1033Mark.APM','M1033Mark.INI','M1033Mark.SPEECHUX.NUS','M1033Mark.TBT.NUS',
]] + [rf'C:\Windows\Speech\Engines\TTS\en-US\{n}' for n in [
    'M1033ZIR.APM','M1033ZIR.INI','M1033ZIR.Keyboard.NUS','MSTTSLocEnUS.dat',
]]

def sha(p):
    h = hashlib.sha256()
    with open(p,'rb') as f:
        for chunk in iter(lambda: f.read(1<<20), b''): h.update(chunk)
    return h.hexdigest()

def pe_info(p):
    try:
        pe = pefile.PE(p, fast_load=True)
        pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_DEBUG'], pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_RESOURCE']])
        info = {'machine': hex(pe.FILE_HEADER.Machine), 'image_base': hex(pe.OPTIONAL_HEADER.ImageBase), 'timestamp': pe.FILE_HEADER.TimeDateStamp}
        try:
            vs = pe.VS_FIXEDFILEINFO[0]
            info['file_version'] = '%d.%d.%d.%d' % (vs.FileVersionMS>>16, vs.FileVersionMS&0xffff, vs.FileVersionLS>>16, vs.FileVersionLS&0xffff)
        except Exception: pass
        try:
            pdb = pe.DIRECTORY_ENTRY_DEBUG[0].entry.PdbFileName
            info['pdb'] = pdb.decode(errors='replace').rstrip('\0') if isinstance(pdb, bytes) else str(pdb).rstrip('\0')
        except Exception: pass
        pe.close(); return info
    except Exception as e:
        return {'error': str(e)}

def file_kind(p):
    b = open(p,'rb').read(16)
    if b[:2] == b'MZ': return 'PE'
    if b[:4] == b'APM ': return 'APM'
    if b[:4] == b'BEPT': return 'BEP'
    if b[:2] == b'\xff\xfe': return 'UTF-16 text'
    if all((c in b'\r\n\t' or 32 <= c < 127) for c in b): return 'ASCII text'
    return 'binary'

out = {'root': ROOT, 'files': []}
for p in FILES:
    if not os.path.exists(p):
        out['files'].append({'path': p, 'missing': True}); continue
    rec = {'path': p, 'size': os.path.getsize(p), 'sha256': sha(p), 'kind': file_kind(p)}
    if rec['kind'] == 'PE': rec['pe'] = pe_info(p)
    out['files'].append(rec)
json.dump(out, open(os.path.join(ROOT,'artifacts','inventory.json'),'w'), indent=2)
print('wrote', len(out['files']), 'records')
