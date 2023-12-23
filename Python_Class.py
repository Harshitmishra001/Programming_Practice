class timer:
    def __init__(self,radius0):
        self.radius0=radius0
    def volume(radius0):
        return 4/3*3.14*pow(radius0,3)
    def surfacearea(radius0):
        return 4*3.14*pow(radius0,2)
radius=int(input("Enter The radius"))
sur=timer.surfacearea(radius)
vol=timer.volume(radius)
print("The Surface area is: ",sur,"Volume is: ",vol)
