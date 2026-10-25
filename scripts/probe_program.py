import os, pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
proj = pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb', 'MSTTS')
def cb(df,p):
    fm=p.getFunctionManager(); funcs=list(fm.getFunctions(True))
    print('program',p.getName(),'functions',len(funcs))
    for pat in ['HTS','NUS','Vocoder','Excitation','TTS','Wave','Duration','F0','Phone','Lexicon','MSTTS','CAcoustic','HMM']:
        hits=[f.getName() for f in funcs if pat.lower() in f.getName().lower()]
        print(pat,len(hits),hits[:12])
pyghidra.walk_programs(proj, cb)
