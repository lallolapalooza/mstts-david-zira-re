import os, pyghidra, collections
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj=pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS')
def cb(df,p):
 if p.getName()!='MSTTSEngine.dll': return
 fm=p.getFunctionManager(); funcs=list(fm.getFunctions(True))
 print('functions',len(funcs))
 cls=collections.Counter(f.getParentNamespace().getName() for f in funcs)
 for c,n in cls.most_common(20): print(n,c)
 for pat in ['Speak','HTS','HMM','NUS','DNN','Vocoder','Excitation','LoadVoice','LoadData','DecisionTree','Duration','F0','Wave']:
  hits=[f for f in funcs if pat.lower() in f.getName().lower()]
  print(pat,len(hits),[f.getName() for f in hits[:6]])
pyghidra.walk_programs(proj,cb)
