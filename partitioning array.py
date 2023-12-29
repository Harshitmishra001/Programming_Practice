import array as arr
even_array1=arr.array('i',[])
odd_array1=arr.array('i',[])
my_array = arr.array('i',[1, 2, 3, 4, 5, 6, 7, 8, 9])
def random_num(x,y):
    return r.randint(x,y)
def random_num_array(array1):
    return r.choice(array1)
def is_even(x):
    if x % 2 == 0:
        even_array1.append(x)
    else:
        odd_array1.append(x)
for i in my_array:
    is_even(my_array[i])
for i in even_array1:
    print(i)
for i in odd_array1:
    print(i)
import random as r
import array as arr
Listing=arr.array('i',[1,3,5,7,8,9,4,6,12,14,17])
lower_limit=int(input("Enter Lower Limit: "))
Upper_limit=int(input("Enter Upper Limit: "))
print(random_num(lower_limit,Upper_limit))
print(random_num_array(Listing))