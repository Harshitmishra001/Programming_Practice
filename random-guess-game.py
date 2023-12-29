import random as r
a =r.randint(1,100)
win=False
turn=1
while(win==False):
    guess=int(input("Enter Your Guess"))
    if(a==guess):
        print("You win and turns taken:",turn)
        win=True 
    else:
        if(a<guess):
            print("Your Guess is higher and turns taken:",turn)
            turn=turn+1
        else:
            print("Your guess is lower and turns taken:",turn)
            turn=turn+1
