import pandas as pd

#list
# lst = ["apple", "orange", "mango"]
# df = pd.DataFrame(lst)
# print(df)

dict
dct = {"Name": ["Manik", "Tom", "Nick"], "Age": [18, 12, 16]}
df1 = pd.DataFrame(dct)
print(df1)
print(df1["Age"])

# import numpy
# rn = numpy.random.randn
# from pandas import *
# s = Series(rn(3), ('a','b', 'c'))
# print(s)
# print(s.index)
# s = s.reindex(['c','b','a'])
# print(s.index)

# # s = s + s
# d = {1 : s*s, 2: s+s, 3: s*3 }
# # print(s)



#loc and iloc
#df.head , info, describe, read_csv, df.duplicate().sum()
#df["name"].unique()
#df.isnull().sum()
#df.replace(np.nan, "0", inplace = True)
#df.boxplot(column = [" "])             plt.show
#df.corr()
#
#