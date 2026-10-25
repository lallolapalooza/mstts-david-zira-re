import os, pyghidra, json
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj=pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS')
def cb(df,p):
 if 'MSTTSLoc_OneCore' not in p.getName(): return
 fm=p.getFunctionManager(); funcs=list(fm.getFunctions(True))
 print('functions',len(funcs))
 for f in funcs:
  n=f.getName();
  if any(k in n for k in ['GetLocaleHandler','LangData','LoadData','Deserialize','Read','Parse','Lexicon','Phone','TN','Normal','DataTable','DataPack','GetWord','Lookup','Convert']):
   print(f['entry'] if False else f"{f.getEntryPoint()} {f.getBody().getNumAddresses():5d} {f.getParentNamespace()} {n}")
pyghidra.walk_programs(proj,cb)
