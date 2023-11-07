# Check if the number is prime
number = 10
is_prime = True
for i in range(2, int(number**0.5) + 1):
    if number % i == 0:
        is_prime = False
        break
print("Is the number prime?", is_prime)
