import pickle as pk
students={
    "student1":{"name":"Alice","age":10,"grade":4},"student2":{"name":"Bob","age":12,"grade":5},
    "student3":{"name":"Shelly","age":11,"grade":5}
}
with open("student_info.pkl","wb") as writeing:#serialization with pickle
    pk.dump(students,writeing)
with open("student_info.pkl","rb") as reading:#deserialiazationwith pickle
    print(pk.load(reading))    