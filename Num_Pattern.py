#Logic-->
# 11
# 2222
# 333333
# 44444444
# 5555555555
#r=1,c=2,i=1
#r=2,c=4,i=2
#r=3,c=6,i=3
#r=4,c=8,i=4
#r=5,c=10,i=5
row=1
while(row<=5):
    col=1
    while(col<=row*2):
        print(row,end=" ")
        col=col+1
    print()
    row=row+1
#way2 
row=1
while(row<=5):
    col=1
    while(col<=row*2):
        print(row,end=" ")
        col=col+1
    print()
    row=row+1
#way3
i=1
for x in range(1,10,2):
    for y in range(x+1):
        print(i,end='')
    print()
    i=i+1 
