import sqlite3

conn=sqlite3.connect('employee.db')
cursor = conn.cursor()
cursor.execute('''
CREATE TABLE IF NOT EXISTS employee
(ID INTEGER Primary Key, Name TEXT NOT NULL, 
Department TEXT NOT NULL,Project TEXT NOT NULL,
Salary REAL NOT NULL )
''')
conn.commit()
def add_employee(id, name, department, project, salary):
    cursor.execute('''
    INSERT INTO employee (ID, Name, Department, Project, Salary)
    VALUES (?,?,?,?,?)''',(id, name, department, project, salary))
    conn.commit()
add_employee(1, 'Harshit Mishra', 'IT', 'Project X', 90000)
add_employee(2, 'Surya Pratap Singh', 'HR', 'Project Y', 60000)
add_employee(3, 'Manik Pandey', 'Finance', 'Project Z', 70000)
add_employee(4, 'Abhinav Jha', 'Sales', 'Project X', 50000)
def find_employee(name):
    cursor.execute(' SELECT * FROM employee WHERE Name=?',name)
    return cursor.fetchone()
name=input("Enter Name to Find:")
print(find_employee(name))
conn.close()