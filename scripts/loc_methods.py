import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj=pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS')
def cb(df,p):
 if 'MSTTSLoc_OneCore' not in p.getName(): return
 fm=p.getFunctionManager()
 for f in fm.getFunctions(True):
  ns=f.getParentNamespace().getName()
  if ns in ('CTTSLocaleHandler','CTTSLocaleHandlerENU','CLocaleTextAnalyzerENU','CTTSDataBase','CTTSFeatureCARTData','CTrieLexicon','CWordPronunciation','CLocaleTextAnalyzer'):
   print(f"{f.getEntryPoint()} {f.getBody().getNumAddresses():5d} {ns} {f.getName()}")
pyghidra.walk_programs(proj,cb)
