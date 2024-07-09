def fibo(n):
    a = 0
    b = 1
    nxterm = 0
    for i in range(n):
        print (a)
        nxterm = a + b
        a = b
        b = nxterm
