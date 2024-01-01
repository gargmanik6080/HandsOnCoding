from tkinter import *;


root = Tk()
root.title("Login Form")
root.geometry("1000x800")

# LABELS
calc = Label(root, text="Calculator", padx=20, font="comic  20 bold")
m = Label(root, text="Enter the number M ")
n = Label(root, text="Enter the number N ")

calc.grid(row=0, column=1)
m.grid(row=1, column=0)
n.grid(row=2, column=0)

# ENTRIES
me = Entry(root, width=30)
ne = Entry(root, width=30)

me.grid(row=1, column=2)
ne.grid(row=2, column=2)

def add():
    a = int(me.get())
    b = int(ne.get())
    mn = a+b
    str2 = "The added value of M and N is : " +  str(mn)
    res = Label(root, text=str2)
    res.grid(row=4, column=2)

#BUTTON
but = Button(root, text="Add", command=add)
but.grid(row=5, column=1)



#  image

root.mainloop()
