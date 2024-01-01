from tkinter import *
print("Hello")
root = Tk()


root.title("Welcome")
root.geometry("400x300")


# PACK
# lab = Label(root, text="hello", fg="red4", bg='yellow', font="Verdana 10 bold underline",
#              padx=15,pady=15, width=15, height=10)
# lab.pack(side=LEFT)


# GRID
"""
lab2 = Label(root, text="My name is ... ", fg="red4", bg='cyan', font="Verdana 10 bold underline",
             padx=15,pady=15, width=15, height=10)
lab3 = Label(root, text="Im not telling ", fg="red4", bg='lightgreen', font="Verdana 10 bold underline",
             padx=15,pady=15, width=15, height=10)

lab2.grid(row=0, column=0)
lab3.grid(row=3, column=2)

"""

# PLACE
# lab = Label(root, text="hello", fg="red4", bg='yellow', font="Verdana 10 bold underline",
#              padx=15,pady=15, width=15, height=10)
# lab.place(x=100, y=50)


# BUTTON
'''
button = Button(root, text="Don't click me!!", 
                bg="grey", fg="red",
                width=20, height=2)
button.pack()
'''

def clk():
    mylab = Label(root, text="Why you click me ( ! _ ! ) ")
    mylab.pack()

button = Button(root, text="Don't click me!!", 
                bg="grey", fg="red",
                width=20, height=2,
                command=clk)
button.pack()


root.mainloop()
print("Bye")