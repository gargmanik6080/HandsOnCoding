import os.path

# Check if a file exists
file_path = "/bin/bash"
if os.path.exists(file_path):
  print("File exists : " + file_path)
else:
  print("File does not exist")