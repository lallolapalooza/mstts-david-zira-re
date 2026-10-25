import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
OUT=r'C:\Users\[user]\Downloads\mstts-re\artifacts\decompiled_desktop'; os.makedirs(OUT,exist_ok=True)
A={'18005c3e4':'CHTSVoiceData_LoadVoiceDataHeader','18005c52c':'CHTSVoiceData_ValidateFileHeader','18005bf50':'CHTSVoiceData_LoadData','180006e90':'CHTSAcousticModel_LoadDecisionTrees','18000d3d8':'CHTSAcousticModel_BuildHMMState','18000d59c':'CHTSAcousticModel_BuildHMMStream','18005db44':'CHTSAcousticModel_BuildDuration','18004dfd0':'CVocoder_Process','18004d3b0':'CVocoder_Initialize','180011de0':'CDurationPredictor_Predict','180084550':'CNUSVoiceData_LoadData'}
def cb(df,p):
 if p.getName()!='MSTTSEngine.dll': return
 ifc=DecompInterface(); ifc.setOptions(DecompileOptions()); ifc.openProgram(p)
 fm=p.getFunctionManager(); mon=ConsoleTaskMonitor()
 for a,l in A.items():
  f=fm.getFunctionAt(p.getAddressFactory().getAddress(a))
  if not f: print('MISS',l); continue
  r=ifc.decompileFunction(f,180,mon)
  if not r.decompileCompleted(): print('FAIL',l); continue
  open(os.path.join(OUT,l+'.c'),'w',encoding='utf-8').write(r.getDecompiledFunction().getC())
  print('OK',l,len(r.getDecompiledFunction().getC()))
pyghidra.walk_programs(pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS'),cb)
