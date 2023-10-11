
a = 0
b = 1
nxterm = 0
n=int(input("Enter Size of Series"))
for i in range(n):
    nxterm = a + b
    print(a)
    a = b
    b = nxterm