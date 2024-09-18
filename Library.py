import tkinter
from tkinter import *
from tkinter import ttk
import tkinter.messagebox
import mysql.connector
from tkinter import messagebox

class LibraryManagementSystem:
    def __init__(self, root):
        self.root = root
        self.root.title("Library Management System")
        self.root.geometry("800x600+0+0")

        # Variables
        # self.memeber_var = StringVar()
        self.BookID_var = StringVar()
        self.BookName_var = StringVar()
        self.AuthName_var = StringVar()
        self.AvaOfBook_var = StringVar()
        self.IssuerID_var = StringVar()

        # Title label
        lbltitle = Label(self.root, text="LIBRARY MANAGEMENT SYSTEM", bg="pink", fg="BLACK", bd=10, relief=RIDGE, font=("times new roman", 20, "bold"), padx=2, pady=6)
        lbltitle.pack(side=TOP, fill=X)

        # Main frame
        frame = Frame(self.root, bd=8, relief=RIDGE, padx=15, bg="pink")
        frame.place(x=0, y=70, width=1535, height=500)

        # DataFrameLeft
        DataFrameLeft = LabelFrame(frame, text="Library Member Information", bg="pink", fg="BLACK", bd=5, relief=RIDGE, font=("times new roman", 15, "bold"), padx=2, pady=6)
        DataFrameLeft.place(x=0, y=5, width=582, height=415)

        lblMember = Label(DataFrameLeft, bg="pink", text="Member Type", font=("times new roman", 15, "bold"), padx=3, pady=6)
        lblMember.grid(row=0, column=0, sticky=W)

        comMember = ttk.Combobox(DataFrameLeft, font=("times new roman", 12, "bold"), width=15, state="readonly")
        comMember["value"] = ("Student", "Admin Staff", "Faculty")
        comMember.grid(row=0, column=1)

        # Book ID Label and Entry
        lbl_BookID = Label(DataFrameLeft, bg="pink", text="Book ID", font=("times new roman", 15, "bold"), padx=3, pady=6)
        lbl_BookID.grid(row=1, column=0, sticky=W)
        txt_BookID = Entry(DataFrameLeft, font=("times new roman", 12, "bold"), width=29, textvariable=self.BookID_var)
        txt_BookID.grid(row=1, column=1)

        # Book Name Label and Entry
        lbl_Bookname = Label(DataFrameLeft, bg="pink", text="Book Name", font=("times new roman", 15, "bold"), padx=3, pady=6)
        lbl_Bookname.grid(row=2, column=0, sticky=W)
        txt_Bookname = Entry(DataFrameLeft, font=("times new roman", 12, "bold"), width=29, textvariable=self.BookName_var)
        txt_Bookname.grid(row=2, column=1)

        # Author Name Label and Entry
        lbl_AuthName = Label(DataFrameLeft, bg="pink", text="Author Name", font=("times new roman", 15, "bold"), padx=3, pady=6)
        lbl_AuthName.grid(row=3, column=0, sticky=W)
        txt_AuthName = Entry(DataFrameLeft, font=("times new roman", 12, "bold"), width=29, textvariable=self.AuthName_var)
        txt_AuthName.grid(row=3, column=1)

        # Status of Book Label and Combobox
        lblStatus = Label(DataFrameLeft, bg="pink", text="Status Of Book", font=("times new roman", 15, "bold"), padx=3, pady=6)
        lblStatus.grid(row=4, column=0, sticky=W)
        txt_Status = Entry(DataFrameLeft, font=("times new roman", 12, "bold"), width=29, textvariable=self.AvaOfBook_var)
        txt_Status.grid(row=4, column=1)

        # Issuer ID Label and Entry
        lbl_issuerID = Label(DataFrameLeft, bg="pink", text="Issuer ID", font=("times new roman", 15, "bold"), padx=3, pady=6)
        lbl_issuerID.grid(row=5, column=0, sticky=W)
        txt_issuerID = Entry(DataFrameLeft, font=("times new roman", 12, "bold"), width=29, textvariable=self.IssuerID_var)
        txt_issuerID.grid(row=5, column=1)

        # DataFrameRight
        DataFrameRight = LabelFrame(frame, text="Book Detail", bg="pink", fg="BLACK", bd=5, relief=RIDGE, font=("times new roman", 15, "bold"), padx=2, pady=6)
        DataFrameRight.place(x=595, y=5, width=900, height=415)

        self.textBox = Text(DataFrameRight, font=("times new roman", 15, "bold"), width=60, height=16, padx=3, pady=6)
        self.textBox.grid(row=0, column=1)

        # Populate the listbox with book titles
        book_list = ['The Catcher in the Rye', 'To Kill a Mockingbird', 'Pride and Prejudice', 'The Great Gatsby', 'Moby Dick',
                     'War and Peace', 'The Odyssey', 'Ulysses', 'The Brothers Karamazov', 'Crime and Punishment',
                     'Brave New World', 'Jane Eyre', 'Wuthering Heights', 'The Divine Comedy', 'Frankenstein',
                     'Dracula', 'Don Quixote', 'The Hobbit', 'The Lord of the Rings']

        def SelectBook(event=""):
            value = str(listBox.get(listBox.curselection()))
            x = value
            if (x == "The Catcher in the Rye"):
                self.BookID_var.set(100)
                self.BookName_var.set("The Catcher in the Rye")
                self.AuthName_var.set("J.D.Sainger")
                self.AvaOfBook_var.set("Issued")
                self.IssuerID_var.set("A1M")

            elif (x == 'To Kill a Mockingbird'):
                self.BookID_var.set(101)
                self.BookName_var.set("To Kill a Mockingbird'")
                self.AuthName_var.set("Harper Lee")
                self.AvaOfBook_var.set("Available")
                self.IssuerID_var.set("A2M")

            elif (x == 'Pride and Prejudice'):
                self.BookID_var.set(103)
                self.BookName_var.set("Pride and Prejudice")
                self.AuthName_var.set("Jane Austin")
                self.AvaOfBook_var.set("Available")
                self.IssuerID_var.set("A3M")

            elif (x == 'Frankenstein'):
                self.BookID_var.set(104)
                self.BookName_var.set("Frankenstein")
                self.AuthName_var.set("Mary Shellby")
                self.AvaOfBook_var.set("Available")
                self.IssuerID_var.set("A4M")

            elif (x == 'Don Quixote'):
                self.BookID_var.set(105)
                self.BookName_var.set("Don Quixote")
                self.AuthName_var.set("Minguel de Cervantes")
                self.AvaOfBook_var.set("Available")
                self.IssuerID_var.set("A5M")


            elif (x == 'The Hobbit'):
                self.BookID_var.set(106)
                self.BookName_var.set("The Hobbit'")
                self.AuthName_var.set("J.R.R. Tolkien")
                self.AvaOfBook_var.set("Available")
                self.IssuerID_var.set("A6M")

        listBox = Listbox(DataFrameRight, font=("times new roman", 15, "bold"), width=60, height=20)
        listBox.bind("<<ListboxSelect>>", SelectBook)
        listBox.grid(row=0, column=0, padx=4)

        for book in book_list:
            listBox.insert(END, book)

        # Configure the grid weights to make sure the text widget expands
        DataFrameRight.grid_rowconfigure(0, weight=1)
        DataFrameRight.grid_columnconfigure(0, weight=1)

        # Button frame
        frameButton = Frame(self.root, bd=8, relief=RIDGE, padx=15, bg="pink")
        frameButton.place(x=0, y=480, width=1535, height=100)

        btnAddData = Button(frameButton, text="Add  Data", font=("times new roman", 15, "bold"), width=20, bg="powder blue", fg="black", command=self.add_data)
        btnAddData.grid(row=0, column=0)

        btnViewData = Button(frameButton,command=self.viewData, text="View Record", font=("times new roman", 15, "bold"), width=20, bg="powder blue", fg="black")
        btnViewData.grid(row=0, column=2)

        btnDeleteAll = Button(frameButton,command=self.delete, text="Delete All Record", font=("times new roman", 15, "bold"), width=20, bg="powder blue", fg="black")
        btnDeleteAll.grid(row=0, column=4)

        btnUpdate = Button(frameButton,text="Update", font=("times new roman", 15, "bold"), width=20, bg="powder blue", fg="black")
        btnUpdate.grid(row=0, column=6)

        btnExit = Button(frameButton, text="Exit", command=self.iExit,font=("times new roman", 15, "bold"), width=20, bg="powder blue", fg="black")
        btnExit.grid(row=0, column=8)

        btnReset = Button(frameButton,command=self.reset, text="Reset", font=("times new roman", 15, "bold"), width=20, bg="powder blue", fg="black")
        btnReset.grid(row=0, column=10)

        # Info frame
        FrameDetails = Frame(self.root, bd=12, relief=RIDGE, padx=20, bg="pink")
        FrameDetails.place(x=0, y=580, width=1535, height=215)

        # Scrollbar for the treeview
        yscroll = ttk.Scrollbar(FrameDetails, orient=VERTICAL)
        yscroll.pack(side=RIGHT, fill=Y)

        self.library_table = ttk.Treeview(FrameDetails, column=("Book ID", "Book Name", "Author Name", "Status of Book", "Issuer ID"), yscrollcommand=yscroll.set)
        yscroll.config(command=self.library_table.yview)

        self.library_table.heading("Book ID", text="Book ID")
        self.library_table.heading("Book Name", text="Book Name")
        self.library_table.heading("Author Name", text="Author Name")
        self.library_table.heading("Status of Book", text="Status of Book")
        self.library_table.heading("Issuer ID", text="Issuer ID")

        self.library_table["show"] = "headings"
        self.library_table.pack(fill=BOTH, expand=1)


        self.fetch_data()
        self.library_table.bind("<<ButtonRelease-1>>",self.get_cursor)

    def add_data(self):
        # if self.memeber_var.get() == "" or self.BookID_var.get() == "":
        #     messagebox.showerror("Error", "All fields are required")
        # else:
        #     try:
                conn = mysql.connector.connect(host="localhost", username="Nidhi", password="Nidhi@2355", database="mydata")
                my_cursor = conn.cursor()
                my_cursor.execute("insert into library values (%s,%s,%s,%s,%s)", (
                    # self.memeber_var.get(),
                    self.BookID_var.get(),
                    self.BookName_var.get(),
                    self.AuthName_var.get(),
                    self.AvaOfBook_var.get(),
                    self.IssuerID_var.get(),
                ))

                conn.commit()

                self.fetch_data()
                conn.close()
                messagebox.showinfo("Success", "Your record was successfully recorded!!!!")

    # def update(self):
    #     conn = mysql.connector.connect(host="localhost", username="Nidhi", password="Nidhi@2355", database="mydata")
    #     my_cursor = conn.cursor()
    #     my_cursor.execute(
    #     "UPDATE library SET BookName=%s, AuthName=%s, AvaOfBook=%s, IssuerID=%s WHERE BookID=%s",
    #     (
    #         self.BookName_var.get(),
    #         self.AuthName_var.get(),
    #         self.AvaOfBook_var.get(),
    #         self.IssuerID_var.get(),
    #         self.BookID_var.get(),
    #     )
    # )

    #     conn.commit()
    #     self.fetch_data()
    #     self.reset()
    #     conn.close()

    # messagebox.showinfo("Success", "Record Successfully Updated")

         

    def fetch_data(self):
         conn = mysql.connector.connect(host="localhost", username="Nidhi", password="Nidhi@2355", database="mydata")
         my_cursor = conn.cursor()
         my_cursor.execute("select * from library")
         rows=my_cursor.fetchall()

         if len(rows)!=0:
              self.library_table.delete(*self.library_table.get_children())
              for i in rows:
                   self.library_table.insert("",END,values=i)
              conn.commit()
              conn.close()


    def get_cursor(self,event=""):
         cursor_row=self.library_table.focus()
         content=self.library_table.item(cursor_row)
         row=content['values']

         self.BookID_var.set(row[0]),
         self.BookName_var.set(row[1]),
         self.AuthName_var.set(row[2]),
         self.AvaOfBook_var.set(row[3]),
         self.IssuerID_var.set(row[4])

    def viewData(self):
         self.textBox.insert(END,"Book ID\t\t"+self.BookID_var.get()+"\n")
         self.textBox.insert(END,"Book Name\t\t"+self.BookName_var.get()+"\n")

         self.textBox.insert(END,"Auther Name\t\t"+self.AuthName_var.get()+"\n")

         self.textBox.insert(END,"Status of Book\t\t"+self.AvaOfBook_var.get()+"\n")

         self.textBox.insert(END,"Issuer ID\t\t"+self.IssuerID_var.get()+"\n")


    def reset(self):
        self.BookID_var.set("")
        self.BookName_var.set("")
        self.AuthName_var.set("")
        self.AvaOfBook_var.set("")
        self.IssuerID_var.set("") 
        self.textBox.delete("1.0", END)


    def iExit(self):
         iExit=tkinter.messagebox.askyesno("Library Management System","Do you want to exit")
         if iExit>0:
              self.root.destroy()
              return
         


    def delete(self):
        if self.BookID_var.get() == "":  # Add colon here and fix condition
          messagebox.showerror("Error", "First select a book record to delete")
        else:
            conn = mysql.connector.connect(host="localhost", username="Nidhi", password="Nidhi@2355", database="mydata")
            my_cursor = conn.cursor()
            query = "delete from library where BookID=%s"  # Corrected query syntax
            value = (self.BookID_var.get(),)
            my_cursor.execute(query, value)

            conn.commit()
            self.fetch_data()
            self.reset()
            conn.close()
        messagebox.showinfo("Success", "Record Successfully Deleted")

              
              

           

              

  

         
                   

         

            # except Exception as es:
            #     messagebox.showerror("Error", f"Due To: {str(es)}")

if __name__ == "__main__":
    root = Tk()
    obj = LibraryManagementSystem(root)
    root.mainloop()


