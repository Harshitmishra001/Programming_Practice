a = 0
b = 1
nxterm = 0
n2=int(input("enyter number"))
n=int(input("Enter Size of Series"))
for i in range(n):
    print (a)
    nxterm = a + b
    if n2==a:
        print("Exists")
    a = b
    b = nxterm