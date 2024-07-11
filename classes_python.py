from abc import ABC,abstractmethod
class students:
    def __init__(self):
        name=""
        CGPA=0.0
    def dataTaker(self):
        self.name=input("Enter Name: ")
        self.CGPA=int(input("Enter CGPA: "))
    def displayCredentials(self):
        print("Your name:",self.name)
        print("Your CGPA: ",self.CGPA)
student=students()
student.dataTaker()
student.displayCredentials()
