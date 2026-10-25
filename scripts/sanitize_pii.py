"""Redact host/user PII from text files (used before publishing)."""
import os, re, sys, zipfile, tempfile, shutil, json, hashlib

NAME_PATTERNS = [
    ('[user]', '[user]'),
    ('[user]', '[user]'),
    ('[user]', '[user]'),
    ('[user]', '[user]'),
]
EMAIL_RE = re.compile(r'[A-Za-z0-9._%+\-]{1,64}@[A-Za-z0-9.\-]{1,255}\.[A-Za-z]{2,24}')

def scrub(text, redact_emails=False):
    for a,b in NAME_PATTERNS:
        text = text.replace(a,b)
    if redact_emails:
        text = EMAIL_RE.sub('[email]', text)
    return text

def is_text(path):
    ext = os.path.splitext(path)[1].lower()
    return ext in {'.md','.txt','.json','.jsonl','.log','.c','.h','.py','.ps1','.xml','.ini','.reg','.csv','.html','.yml','.yaml','.toml','.gitignore',''} or ext=='.gitignore'

def walk(root, skip_dirs=()):
    for dp, dns, fns in os.walk(root):
        dns[:] = [d for d in dns if d not in skip_dirs and d != '.git']
        for fn in fns:
            yield os.path.join(dp, fn)

def sanitize_tree(root, redact_emails=False):
    changed = 0
    for p in walk(root, {'.git','ghidra_proj_pdb','samples','corpus'}):
        if not is_text(p): continue
        try: s = open(p, encoding='utf-8').read()
        except (UnicodeDecodeError, OSError): continue
        n = scrub(s, redact_emails)
        if n != s:
            open(p,'w',encoding='utf-8',newline='').write(n)
            changed += 1
    return changed

def sanitize_zip(src, dst):
    tmp = tempfile.mkdtemp(prefix='omp-sanitize-')
    with zipfile.ZipFile(src) as z:
        z.extractall(tmp)
    # scrub every text file, including session transcript and viewer
    for p in walk(tmp):
        if not is_text(p): continue
        try: s = open(p, encoding='utf-8').read()
        except (UnicodeDecodeError, OSError): continue
        open(p,'w',encoding='utf-8',newline='').write(scrub(s, redact_emails=True))
    # refresh manifest sizes for the files we touched
    man_path = os.path.join(tmp,'manifest.json')
    man = json.load(open(man_path, encoding='utf-8'))
    man['source']['sessionFile'] = scrub(man['source']['sessionFile'])
    man['source']['cwd'] = scrub(man['source']['cwd'])
    main_path = os.path.join(tmp,'session.jsonl')
    man['main']['bytes'] = os.path.getsize(main_path)
    for rec in man.get('artifacts',[]):
        rec['bytes'] = os.path.getsize(os.path.join(tmp, rec['file']))
    # update generated README totals
    total = sum(os.path.getsize(os.path.join(dp,f)) for dp,_,fs in os.walk(tmp) for f in fs)
    readme_path = os.path.join(tmp,'README.md')
    if os.path.exists(readme_path):
        s = open(readme_path, encoding='utf-8').read()
        s = re.sub(r'(?m)^21 files, \d+ bytes\.$', f'21 files, {total} bytes.', s)
        open(readme_path,'w',encoding='utf-8',newline='').write(s)
    # rewrite zip with same relative names
    with zipfile.ZipFile(dst,'w',zipfile.ZIP_DEFLATED) as z:
        for p in sorted(walk(tmp)):
            z.write(p, os.path.relpath(p,tmp).replace(os.sep,'/'))
    shutil.rmtree(tmp)
    return hashlib.sha256(open(dst,'rb').read()).hexdigest(), os.path.getsize(dst), total

if __name__ == '__main__':
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    n = sanitize_tree(root)
    print('repo text files scrubbed:', n)
    src = os.path.join(root,'archive','omp-archive-2026-10-24_mstts-re.zip')
    tmp = src + '.sanitized'
    h, zsize, usize = sanitize_zip(src, tmp)
    os.replace(tmp, src)
    print('archive sha256', h, 'zip', zsize, 'uncompressed', usize)
