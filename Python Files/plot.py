import matplotlib.pyplot as plt
from collections import Counter
num = [100, 49, 41, 40, 25,55,0,10,10,10,25,55,100,0,0,0,0,0,0,0,0]
fc = Counter(num)
xs = range(101)
ys = [fc[x] for x in xs]
plt.bar(xs,ys, 2)
plt.axis([-1,101,0,10])
tick = [i for i in range(0,101,10)]
plt.xticks(tick)
plt.title("YO")
plt.xlabel("count of friends")
plt.ylabel("no. of people")
plt.show()