# INPUT
n = int(input())
li = []
for i in range(n):
    x = input().split()
    li.append(x)

m = int(input())
q = []
for i in range(m):
    p = map(int, input().split())
    q.append(list(p))
dict_in = {}
dict_out = {}
names = []

# DATA PROCESSING 1
for i in range(len(li)):
    # for j in range(li[i]):
    #     if li[i][j] == '-' and li[i][j+1] == '|':
    #         j = j + 2
    #     if li[i][j] == '|' and li[i][j+1] == '-': 
    #         break
    y = li[i].index('|')
    print(y)
    temp1 = []
    for j in range(y):
        if li[i][j] == '-' :
            break
        else:
            temp1.append(li[i][j])
            if li[i][j] not in names:
                names.append(li[i][j])
        dict_in[i+1] = temp1
    temp2 = []
    for j in range(y+1, len(li[i])):
        if li[i][j] == '-' :
            break
        else:
            temp2.append(li[i][j])
        dict_out[i+1] = temp2

# DATA PROCESSING 2/ comparision
# for i in range(len(names)):
#     if q[i][0] == dict_in[0]





# OUTPUT




print(li)
print(dict_in)
print(dict_out)
print(names)
print(q)