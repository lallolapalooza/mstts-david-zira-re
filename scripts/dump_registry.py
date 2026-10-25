import winreg, json, sys
KEYS=[
 (winreg.HKEY_LOCAL_MACHINE, r'SOFTWARE\Microsoft\Speech_OneCore\Voices'),
 (winreg.HKEY_LOCAL_MACHINE, r'SOFTWARE\Microsoft\Speech\Voices'),
 (winreg.HKEY_CLASSES_ROOT, r'CLSID\{179F3D56-1B0B-42B2-A962-59B7EF59FE1B}'),
 (winreg.HKEY_CLASSES_ROOT, r'CLSID\{C64501F6-E6E6-451F-A150-25D0839BC510}'),
]
def dump(hive,path):
    out={}
    def rec(p, node):
        with winreg.OpenKey(hive,p,0,winreg.KEY_READ) as k:
            i=0
            while True:
                try: name,val,typ=winreg.EnumValue(k,i)
                except OSError: break
                node.setdefault('values',{})[name or '(Default)']={'value':val,'type':typ}
                i+=1
            i=0
            while True:
                try: sub=winreg.EnumKey(k,i)
                except OSError: break
                node.setdefault('subkeys',{})[sub]={}
                rec(p+'\\'+sub,node['subkeys'][sub]); i+=1
    rec(path,out); return out
res={}
for hive,path in KEYS:
    try: res[path]=dump(hive,path); print('ok',path)
    except Exception as e: res[path]={'error':str(e)}; print('err',path,e)
json.dump(res,open(r'artifacts\registry.json','w'),indent=2)
