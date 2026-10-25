import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj=pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS')
def cb(df,p):
 if 'MSTTSEngine_OneCore' not in p.getName(): return
 rm=p.getReferenceManager(); fm=p.getFunctionManager()
 for addr,s in [(0x180185470,'BEP'),(0x180185468,'INI'),(0x180184ab0,'APM')]:
  a=p.getAddressFactory().getAddress(hex(addr)); print('==',s)
  for ref in rm.getReferencesTo(a):
   fa=ref.getFromAddress(); f=fm.getFunctionContaining(fa)
   print(' ',fa,ref.getReferenceType(),f.getName() if f else None, f.getEntryPoint() if f else '')
pyghidra.walk_programs(proj,cb)
