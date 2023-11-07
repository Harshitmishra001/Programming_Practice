number=int(input("Enter Number"))
reversed_number = 0
while number > 0:
    remainder = number % 10
    reversed_number = (reversed_number * 10) + remainder
    number //= 10
print("The reversed number is:", reversed_number)
