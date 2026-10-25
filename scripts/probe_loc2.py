import os, pyghidra, re, collections
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj=pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS')
def cb(df,p):
 if 'MSTTSLoc_OneCore' not in p.getName(): return
 fm=p.getFunctionManager(); funcs=list(fm.getFunctions(True))
 print('functions',len(funcs))
 cls=collections.Counter()
 for f in funcs: cls[f.getParentNamespace().getName()]+=1
 for c,n in cls.most_common(40): print(n,c)
 for pat in ['GetLocaleHandler','LocaleHandler','LangDataPack','DataTable','Lexicon','PhoneConverter','TextNormalizer','CTextAnalyzer','Pronounc','WordBreaker','TN','Normaliz']:
  hits=[f for f in funcs if pat.lower() in f.getName().lower()]
  print('===',pat,len(hits))
  for f in hits[:30]: print(f"  {f.getEntryPoint()} {f.getBody().getNumAddresses():5d} {f.getParentNamespace().getName()} {f.getName()}")
pyghidra.walk_programs(proj,cb)
