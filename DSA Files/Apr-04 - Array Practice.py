import time

start = time.time()

# arr = [1,2,3,4,5,6,7,8]
# n = len(arr)

# d = 2#int(input("Enter a no.:"))
# temp = []
# x = 0
# for i in range(n):
#     if i < d:
#         temp.append(arr[i]) 
#     else:
#         arr[x] = arr[i] 
#         x = x + 1
# for i in range(d):
#     arr[x] = temp[i]
#     x += 1


# for i in range(n):
#     print(arr[i], end=" ")


# def check(x):
#     if x%2 == 0:
#         return True
#     else:
#         return False

# arr = [1,2,3,4,5,6,7,8]
# # print(arr)

# n = len(arr)
# arr.sort()
# # print(arr)
# arr1 = []
# arr2 = []
# for i in range(n):

#     if i < int(n/2):
#         arr1.append(arr[i])
    
#     else:
#         arr2.append(arr[i])

# arr1.sort(reverse=True)
# print(arr1,arr2)
# x = 0
# for i in range(len(arr1)):
#     print(i)
#     if check(i):
#         arr[x] = arr1[i]
#         x += 1
#     else:
#         arr[x] = arr2[i]
#         x += 1
# print(arr)
end = time.time()
print("Execution time: ", end-start) 