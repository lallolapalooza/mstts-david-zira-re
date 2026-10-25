import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
def cb(df,p):
 if p.getName()!='MSTTSLoc.dll': return
 f=p.getFunctionManager().getFunctionAt(p.getAddressFactory().getAddress('180003270'))
 print(f.getEntryPoint(), f.getBody().getNumAddresses(), f.getName())
pyghidra.walk_programs(pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS'),cb)
