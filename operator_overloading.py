class add_img:
    def __init__(self,x,y):
        self.x = x
        self.y=y
    def __add__(self,other):
        return add_img(self.x+other.x,self.y+other.y)
val1=add_img(3,4)
val2=add_img(5,5)
val3=val1+val2
print(val3.x,val3.y)
