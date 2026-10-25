import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj=pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS')
def cb(df,p):
 if 'MSTTSEngine_OneCore' not in p.getName(): return
 dtm=p.getDataTypeManager()
 for dt in dtm.getAllDataTypes():
  n=dt.getName()
  if n in ('RUNTIME_PARAMETER','HMM_DIST_TYPE','EMOTIONML_CATEGORY') or 'RUNTIME_PARAMETER' in n:
   print('==',n,dt.getPathName())
   
   for e in dt.getValues():
    print(' ',e.getName(),e.getValue())
pyghidra.walk_programs(proj,cb)
