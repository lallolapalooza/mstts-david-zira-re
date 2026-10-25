import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
OUT=r'C:\Users\[user]\Downloads\mstts-re\artifacts\decompiled_loc'
os.makedirs(OUT,exist_ok=True)
A={'1800141f0':'GetLocaleHandler','1800197e0':'CTTSLocaleHandlerENU_Initialize','180019660':'CLocaleTextAnalyzerENU_Initialize','18000fa30':'CTTSLocaleHandler_Initialize','1800725b0':'CTTSDataBase_LoadDataObjects','180073350':'CTTSFeatureCARTData_LoadData','180062d20':'CTrieLexicon_Load','180072508':'CTTSDataBase_GetDataObject','180019460':'CTTSLocaleHandlerENU_GetLocaleTextAnalyzer','1800194f0':'CLocaleTextAnalyzerENU_GetMorphLexicon','18000a1d0':'CLocaleTextAnalyzerENU_GetOOVPronunciation'}
def cb(df,p):
 if 'MSTTSLoc_OneCore' not in p.getName(): return
 ifc=DecompInterface(); ifc.setOptions(DecompileOptions()); ifc.openProgram(p)
 fm=p.getFunctionManager(); mon=ConsoleTaskMonitor()
 for addr,label in A.items():
  f=fm.getFunctionAt(p.getAddressFactory().getAddress(addr))
  if f is None: print('MISS',addr,label); continue
  r=ifc.decompileFunction(f,180,mon)
  if not r.decompileCompleted(): print('FAIL',label,r.getErrorMessage()); continue
  open(os.path.join(OUT,label+'.c'),'w',encoding='utf-8').write(r.getDecompiledFunction().getC())
  print('OK',label,len(r.getDecompiledFunction().getC()))
pyghidra.walk_programs(pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS'),cb)
