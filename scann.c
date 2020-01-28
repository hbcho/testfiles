import subprocess

out = subprocess.Popen(['wc','-1','my.txt'],
    stdout = subprocess.PIPE,
    stderr = subprocess.STDOUT);
stdout,stderr = out.communicate()
print(stdout)
print(stderr)