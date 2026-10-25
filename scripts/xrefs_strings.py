import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj=pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS')
def cb(df,p):
 if 'MSTTSEngine_OneCore' not in p.getName(): return
 rm=p.getReferenceManager(); fm=p.getFunctionManager()
 for addr,s in [(0x180184ab0,'APM'),(0x180185450,'BEP'),(0x180185448,'INI')]:
  a=p.getAddressFactory().getAddress(hex(addr)); print('==',s,hex(addr))
  for ref in rm.getReferencesTo(a):
   fa=ref.getFromAddress(); f=fm.getFunctionContaining(fa)
   print(' ref',fa,'type',ref.getReferenceType(),'func',f.getName() if f else None)
 # search defined strings APM/BEP
 for d in p.getListing().getDefinedData(True):
  try: v=d.getValue()
  except Exception: continue
  if isinstance(v,str) and v in ('APM','BEP','INI'):
   print('STRING',v,d.getAddress())
pyghidra.walk_programs(proj,cb)
