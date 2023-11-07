n = int(input("Enter a positive integer 'n': "))
if n <= 0:
    print("enter a positive integer.")
else:
    sumed = n * (n + 1) // 2
    print(f"The sum of the first {n} natural numbers is: {sumed}")