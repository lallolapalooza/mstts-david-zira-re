import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
OUT=r'C:\Users\[user]\Downloads\mstts-re\artifacts\decompiled_loc_desktop'; os.makedirs(OUT,exist_ok=True)
def cb(df,p):
 if p.getName()!='MSTTSLoc.dll': return
 fm=p.getFunctionManager(); funcs=list(fm.getFunctions(True)); print('functions',len(funcs))
 # exports
 st=p.getSymbolTable()
 for s in st.getAllSymbols(True):
  if s.isExternalEntryPoint(): print('entry',s.getAddress(),s.getName())
 # decompile GetLocaleHandler
 ifc=DecompInterface(); ifc.setOptions(DecompileOptions()); ifc.openProgram(p); mon=ConsoleTaskMonitor()
 hits=[f for f in funcs if f.getName()=='GetLocaleHandler']
 for f in hits:
  r=ifc.decompileFunction(f,180,mon)
  if r.decompileCompleted():
   open(os.path.join(OUT,'GetLocaleHandler.c'),'w',encoding='utf-8').write(r.getDecompiledFunction().getC())
   print('decompiled',f.getEntryPoint(),len(r.getDecompiledFunction().getC()))
pyghidra.walk_programs(pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS'),cb)
