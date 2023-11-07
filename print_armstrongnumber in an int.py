#WAP to print armstrong number in an interval (1-1000)?
def is_armstrong_number(num):
    num_str = str(num)
    num_digits = len(num_str)
    sum_of_powers = 0
    for digit in num_str:
        sum_of_powers += int(digit) ** num_digits
    return sum_of_powers == num
start = 1
end = 1000
print("Armstrong numbers in the interval [1, 1000]:")
for number in range(start, end + 1):
    if is_armstrong_number(number):
        print(number)