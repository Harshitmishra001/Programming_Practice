students={
    "student1":{"name":"Alice","age":10,"grade":4},"student2":{"name":"Bob","age":12,"grade":5},
    "student3":{"name":"Shelly","age":11,"grade":5}
}
def read(reading):#function for reading
    for i in reading:
        print(i)
with open("student_info.txt",'w') as data: #serialization
    data.write(str(students))
with open("student_info.txt","r") as reading: #deserialization
    read(reading)

