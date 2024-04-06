import subprocess

res = subprocess.run("ls -ll", shell=True, capture_output=True, text=True)
print(res.stdout)