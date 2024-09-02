import tkinter as tk

root = tk.Tk()
root.title("This is a Tkinter Program")

label1 = tk.Label(root, text="Enter Password", fg="blue", font=("Arial", 16))
label1.grid(row=1,column=0,columnspan=2)

entry1 = tk.Entry(root,show=False)
entry1.grid(row=0,column=0)

def button_click():
    password = entry1.get()
    if password == "Harshit":
        label1.config(text="Correct Password", fg="black")
    else:
        label1.config(text="Wrong Password", fg="red")
button1 = tk.Button(root, text="Click This", command=button_click)
button1.grid(row=0,column=1)

checkvar=tk.BooleanVar()
def check_c():
    if checkvar==True:
        label2=tk.Label(root,text="Check Box Enabled")
        label2.grid(row= 2,column=2)
check1=tk.Checkbutton(root,text="Enable??",variable=checkvar,command=check_c)
check1.grid(row=2,column=0)
root.mainloop()