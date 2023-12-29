# def factorial(n):
#     if(n==0 or n==1):
#         return 1
#     else:
#         return n*factorial(n-1)
# n=4
# print(factorial(n))
# def fibbonaci(n):
#     if(n==0):
#         return 0
#     elif(n==1):
#         return 1
#     else:
#         return fibbonaci(n-1)+fibbonaci(n-2)
# num=int(input("Enter Number: "))
# for i in range (0,num):
#     print(fibbonaci(i))
# s1={1,2,3,4}
# s2={3,4,5,6}
# print(s1.union(s2))
# print(s1.intersection(s2))
# def dectobin(n):
#     if n>0:
#         dectobin(n//2)
#         print(n%2,end="")
# print(dectobin(2))
# binary = input("Enter a binary number:")
# def BinaryToDecimal(binary):
#     decimal = 0
#     for digit in binary:
#         print(digit)
#         decimal = decimal*2 + int(digit)
#     print("The decimal value is:", decimal)
# BinaryToDecimal(binary)
import array as arr

arr1 = arr.array('i', [1, 2, 6, 3, 6, 0])
arr1.sort()  # Sort the array in-place

for i in arr1:
    print(i)
