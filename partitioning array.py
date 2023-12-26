import array as arr
even_array1=arr.array('i',[])
odd_array1=arr.array('i',[])
my_array = arr.array('i',[1, 2, 3, 4, 5, 6, 7, 8, 9])
def is_even(x):
    if x % 2 == 0:
        even_array1.append(x)
    else:
        odd_array1.append(x)
for i in range(0,len(my_array)):
    is_even(my_array[i])
for i in even_array1:
    print(i)
for i in odd_array1:
    print(i)