import os, subprocess, sys
GHIDRA = r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC'
JDK = r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
env = os.environ.copy()
env['JAVA_HOME'] = JDK
env['PATH'] = JDK + r'\bin;' + env.get('PATH','')
bat = os.path.join(GHIDRA, 'support', 'analyzeHeadless.bat')
cmd = f'"{bat}" ' + ' '.join('"%s"' % a if ' ' in a else a for a in sys.argv[1:])
print(cmd, flush=True)
sys.exit(subprocess.call(cmd, shell=True, env=env))
