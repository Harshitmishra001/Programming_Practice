import sqlite3

conn=sqlite3.connect('employee.db')
cursor = conn.cursor()
cursor.execute('''
CREATE TABLE IF NOT EXISTS employee
(ID INTEGER Primary Key AUTOINCREMENT, Name TEXT NOT NULL, 
Department TEXT NOT NULL,Project TEXT NOT NULL,
Salary REAL NOT NULL )
''')
conn.commit()
def add_employee(name, department, project, salary):
    cursor.execute('''
    INSERT INTO employee (Name, Department, Project, Salary)
    VALUES (?,?,?,?)''',(name, department, project, salary))
    conn.commit()
add_employee('Harshit Mishra', 'IT', 'Project X', 90000)
add_employee('Surya Pratap Singh', 'HR', 'Project Y', 60000)
add_employee('Manik Pandey', 'Finance', 'Project Z', 70000)
add_employee('Abhinav Jha', 'Sales', 'Project X', 50000)
def find_employee(name):
    cursor.execute(' SELECT * FROM employee WHERE Name=?',(name,))
    return cursor.fetchone()
name=input("Enter Name to Find:")
print(find_employee(name))
conn.close()