from tkinter import *;


root = Tk()
root.title("Login Form")
root.geometry("1000x800")

# LABELS
login = Label(root, text="Login", padx=20, font="comic  20 bold")
name = Label(root, text="Name ")
studID = Label(root, text="Student ID ")
passL = Label(root, text="Password ")

login.grid(row=0, column=1)
name.grid(row=1, column=0)
studID.grid(row=2, column=0)
passL.grid(row=3, column=0)


# ENTRIES
nameE = Entry(root, width=30)
studIDE = Entry(root, width=30)
passE = Entry(root, width=30)

nameE.grid(row=1, column=2)
studIDE.grid(row=2, column=2)
passE.grid(row=3, column=2)

#BUTTON
but = Button(root, text="Submit")
but.grid(row=4, column=1)

root.mainloop()