import array as arr
array1=arr.array('i',[])
n=int(input("Size of Array: "))
for i in range(0,n):
    k=int(input("Enter Value :"))
    array1.insert(i,k)
for i in array1:
    print(i)
u=int(input("find "))    
print(array1[u])