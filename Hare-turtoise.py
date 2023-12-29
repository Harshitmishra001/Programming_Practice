import math
t=int(input())
for i in range (t):
    l,v1,v2=map(int,input().split())
    t=math.ceil(l/v1)
    h=math.ceil(l/v2)
    if(t==h):
        print("-1")
    else:
        print(t-h-1)