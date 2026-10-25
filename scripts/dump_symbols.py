import os, json, sys, time
import pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
from ghidra.util.task import ConsoleTaskMonitor
OUT=r'C:\Users\[user]\Downloads\mstts-re\artifacts'
mon=ConsoleTaskMonitor()

def dump(df,p):
    fm=p.getFunctionManager(); st=p.getSymbolTable(); listing=p.getListing()
    rows=[]; t0=time.time()
    for i,f in enumerate(fm.getFunctions(True)):
        try: calls=[c.getEntryPoint().toString() for c in f.getCalledFunctions(mon)]
        except Exception: calls=[]
        try: callers=[c.getEntryPoint().toString() for c in f.getCallingFunctions(mon)]
        except Exception: callers=[]
        rows.append({'entry':f.getEntryPoint().toString(),'name':f.getName(),
            'signature':str(f.getSignature().getPrototypeString()),'namespace':str(f.getParentNamespace()),
            'size':f.getBody().getNumAddresses(),'external':f.isExternal(),'thunk':f.isThunk(),
            'calls':calls,'callers':callers})
        if i%1000==0: print('funcs',i,flush=True)
    strings=[]
    for d in listing.getDefinedData(True):
        try: v=d.getValue()
        except Exception: continue
        if isinstance(v,str) and v:
            strings.append({'addr':d.getAddress().toString(),'value':v})
    json.dump({'program':p.getName(),'functions':rows,'strings':strings},
              open(os.path.join(OUT,'functions_%s.json'%p.getName().replace('.','_')),'w'),indent=1)
    print('wrote',len(rows),'funcs',len(strings),'strings',time.time()-t0,flush=True)

pyghidra.walk_programs(pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS'), dump)
