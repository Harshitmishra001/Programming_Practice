import random as r
def Userattack(TotalHealthEnemy,DamageUser):
    return TotalHealthEnemy-DamageUser
def Enemyattack(TotalHealthUser,DamageEnemy):
    return TotalHealthUser-DamageEnemy
def UserattackGaurd(TotalHealthEnemy,DamageUserGaurd):
    return TotalHealthEnemy-DamageUserGaurd
def EnemyattackGaurd(TotalHealthUser,DamageEnemyGaurd):
    return TotalHealthUser-DamageEnemyGaurd
TotalHealthUser=100
TotalHealthEnemy=120
DamageUser=40
DamageEnemy=50
DamageEnemyGaurd=25
DamageUserGaurd=20
Turns=0
while TotalHealthUser>0 and TotalHealthEnemy>0:
    print("Current Turns:" ,Turns)
    AttackorGaurdEnemy=r.randint(1,3)
    print("Current Health: ",TotalHealthUser)
    print("Current Enemy Health: ",TotalHealthEnemy)
    AttackorGaurdUser=input("a for Attack And g for Gaurd: ")
    if(AttackorGaurdUser=="a" or AttackorGaurdUser=="A" ):
        if(AttackorGaurdEnemy%2==0):
            TotalHealthUser=Enemyattack(TotalHealthUser,DamageEnemy)
            print("Enemy Attacks!")
            TotalHealthEnemy=Userattack(TotalHealthEnemy,DamageUser)
        else:
            TotalHealthUser=EnemyattackGaurd(TotalHealthUser,DamageEnemyGaurd)
            print("Enemy Gaurds!")
            TotalHealthEnemy=Userattack(TotalHealthEnemy,DamageUser)
    elif(AttackorGaurdUser=="g" or AttackorGaurdUser=="G"):
        if(AttackorGaurdEnemy%2==0):
            TotalHealthUser=Enemyattack(TotalHealthUser,DamageEnemy)
            print("Enemy Attacks!")
            TotalHealthEnemy=UserattackGaurd(TotalHealthEnemy,DamageUserGaurd)
        else:
            print("Gaurd Clash No Damage")
    else:
        print("Worng Input, Attack Missed ")
        if(AttackorGaurdEnemy%2==0):
            TotalHealthUser=Enemyattack(TotalHealthUser,DamageEnemy)
        else:
            TotalHealthUser=EnemyattackGaurd(TotalHealthUser,DamageEnemyGaurd)
    Turns=Turns+1
if(TotalHealthUser<=0):
    print("You Lose")
else:
    print("You win")