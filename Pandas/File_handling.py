# import pandas
# exa = "sample.csv"
# fl = open(exa, "r")
# print(fl.name)
# print(fl.mode)
# print(fl.readline())
# fl.close()


###  READING
'''
with open(exa,"r") as file1:
    # print(file1.readline())
    print(type(file1.readlines()))
    # for i in file1:
    #     print(i)
print("k")'''

###  WRITING
'''
path = "file2"
with open(path,"a+") as wfile:
    wfile.write("\nkore wa nan desu ka???")
    print(wfile.tell())
    print(wfile.read())
    wfile.seek(0,0)
    print(wfile.tell())
    print(wfile.read())
# with open(path,"r") as rfile:
#     print(rfile.read())
'''