import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj=pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS')
def cb(df,p):
 if p.getName()!='MSTTSEngine.dll': return
 fm=p.getFunctionManager()
 for f in fm.getFunctions(True):
  n=f.getName(); ns=f.getParentNamespace().getName()
  if n in ('LoadVoiceDataHeader','ValidateFileHeader','LoadData','LoadDecisionTrees','BuildHMMState','BuildHMMStream','BuildDuration','Synthesize','Process','Speak','Initialize','Predict') and (ns.startswith('CHTS') or ns.startswith('CVocoder') or ns.startswith('CTTSEngine') or ns.startswith('CSps') or ns.startswith('CDuration') or ns.startswith('CF0') or ns.startswith('CNUS')):
   print(f"{f.getEntryPoint()} {f.getBody().getNumAddresses():5d} {ns} {n}")
pyghidra.walk_programs(proj,cb)
