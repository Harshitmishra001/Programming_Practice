import random 
a =random.randint(1,100)
win=False
while(win==False):
    guess=int(input("Enter Your Guess"))
    if(a==int(guess)):
        print("You win")
        win=True
        break       
    else:
        if(a<int(guess)):
            print("Your Guess is higher")
        else:
            print("Your guess is lower")

