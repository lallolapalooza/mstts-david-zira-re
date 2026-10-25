"""Fetch Microsoft public PDBs and stage DLL copies for Ghidra.

Microsoft binaries and PDBs are not redistributed with this repository.
Run this script on a Windows host that has the MSTTS components installed.
"""
import json, os, shutil, urllib.request

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PDB = os.path.join(ROOT, 'artifacts', 'pdb')
BIN = os.path.join(ROOT, 'artifacts', 'bin')
os.makedirs(PDB, exist_ok=True)
os.makedirs(BIN, exist_ok=True)

info = json.load(open(os.path.join(PDB, 'pdb_info.json'), encoding='utf-8'))
for dll, rec in info.items():
    # Copy the installed DLL to the staging directory.
    src = os.path.join(os.environ.get('SystemRoot', r'C:\Windows'), 'System32')
    # inventory.json records the exact source path for each binary
    inv = json.load(open(os.path.join(ROOT, 'artifacts', 'inventory.json'), encoding='utf-8'))
    path = next((f['path'] for f in inv['files'] if os.path.basename(f['path']) == dll), None)
    if path and os.path.exists(path):
        shutil.copy2(path, os.path.join(BIN, dll))
        print('copied', dll)
    else:
        print('MISSING DLL', dll)
    dest = os.path.join(PDB, rec['pdb'])
    if not os.path.exists(dest):
        url = rec['symbol_url']
        req = urllib.request.Request(url, headers={'User-Agent': 'Microsoft-Symbol-Server/10.0'})
        with urllib.request.urlopen(req, timeout=120) as r, open(dest, 'wb') as f:
            f.write(r.read())
        print('downloaded', rec['pdb'], os.path.getsize(dest))
    shutil.copy2(dest, os.path.join(BIN, rec['pdb']))
print('staged in', BIN)
