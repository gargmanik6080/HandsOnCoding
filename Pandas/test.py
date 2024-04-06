import pandas as pd

data = {
	"name" : ["A", "b"],
	"roll" : [1, 3]
}

df = pd.DataFrame(data)

file1 = open("sample.csv", "w")
file1.write(df.to_csv())
file1.close()

