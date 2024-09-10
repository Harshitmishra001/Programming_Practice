import tkinter
m = tkinter.Tk()
'''
widgets are added here
'''
m.mainloop()

from tkinter import *
root = Tk()
w = Label(root, text='GeeksForGeeks.org!')


w.pack()
root.mainloop()

from tkinter import *
root = Tk()
w = Label(root, text='GeeksForGeeks.org!')
w.pack()
root.mainloop()

from tkinter import *

master = Tk()
Label(master, text='First Name').grid(row=0)
Label(master, text='Last Name').grid(row=1)
e1 = Entry(master)
e2 = Entry(master)
e1.grid(row=0, column=1)
e2.grid(row=1, column=1)
mainloop()

# checkbox
from tkinter import *

master = Tk()
var1 = IntVar()
Checkbutton(master, text='male', variable=var1).grid(row=0, sticky=W)
var2 = IntVar()
Checkbutton(master, text='female', variable=var2).grid(row=1, sticky=W)
mainloop()

# Radio button
from tkinter import *

root = Tk()
v = IntVar()
Radiobutton(root, text='GfG', variable=v, value=1).pack(anchor=W)
Radiobutton(root, text='MIT', variable=v, value=2).pack(anchor=W)
mainloop()

# Listbox
from tkinter import *

top = Tk()
Lb = Listbox(top)
Lb.insert(1, 'Python')
Lb.insert(2, 'Java')
Lb.insert(3, 'C++')
Lb.insert(4, 'Any other')
Lb.pack()
top.mainloop()

#scroll bar
from tkinter import *

root = Tk()
scrollbar = Scrollbar(root)
scrollbar.pack(side=RIGHT, fill=Y)
mylist = Listbox(root, yscrollcommand=scrollbar.set)

for line in range(100):
    mylist.insert(END, 'This is line number' + str(line))

mylist.pack(side=LEFT, fill=BOTH)
scrollbar.config(command=mylist.yview)
mainloop()

#Menu
from tkinter import *

root = Tk()
menu = Menu(root)
root.config(menu=menu)
filemenu = Menu(menu)
menu.add_cascade(label='File', menu=filemenu)
filemenu.add_command(label='New')
filemenu.add_command(label='Open...')
filemenu.add_separator()
filemenu.add_command(label='Exit', command=root.quit)
helpmenu = Menu(menu)
menu.add_cascade(label='Help', menu=helpmenu)
helpmenu.add_command(label='About')
mainloop()

# Combo box
import tkinter as tk
from tkinter import ttk

def on_select(event):
    selected_item = combo_box.get()
    label.config(text="Selected Item: " + selected_item)

root = tk.Tk()
root.title("Combobox Example")

# Create a label
label = tk.Label(root, text="Selected Item: ")
label.pack(pady=10)

# Create a Combobox widget
combo_box = ttk.Combobox(root, values=["Option 1", "Option 2", "Option 3"])
combo_box.pack(pady=5)

# Set default value
combo_box.set("Option 1")

# Bind event to selection
combo_box.bind("<<ComboboxSelected>>", on_select)

root.mainloop()

import tkinter as tk
# Function to update the input field
def button_click(char):
    current = entry.get()
    if char == "C":
        entry.delete(0, tk.END)
    elif char == "=":
        try:
            result = eval(current)
            entry.delete(0, tk.END)
            entry.insert(0, result)
        except Exception:
            entry.delete(0, tk.END)
            entry.insert(0, "Error")
    elif char == "←":
        entry.delete(len(current) - 1, tk.END)
    else:
        entry.insert(tk.END, char)

# Create the main window
root = tk.Tk()
root.title("Calculator")

# Create an input field
entry = tk.Entry(root, width=20, font=("Arial", 20))
entry.grid(row=0, column=0, columnspan=5)

# Create buttons for digits (0-9)
buttons = [
    "7", "8", "9", "+",
    "4", "5", "6", "-",
    "1", "2", "3", "*",
    "0", ".", "=", "/"
]
row, col = 1, 0
for button in buttons:
    tk.Button(root, text=button, padx=20, pady=20, font=("Arial", 16),
            command=lambda button=button: button_click(button)).grid(row=row, column=col)
    col += 1
    if col > 3:
        col = 0
        row += 1

# Create a Backspace button
tk.Button(root, text="←", padx=20, pady=20, font=("Arial", 16),
        command=lambda: button_click("←")).grid(row=5, column=3)

# Create a Clear (C) button
tk.Button(root, text="C", padx=20, pady=20, font=("Arial", 16),
        command=lambda: button_click("C")).grid(row=5, column=2)

# Start the Tkinter main loop
root.mainloop()