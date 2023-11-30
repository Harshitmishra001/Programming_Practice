import random as r
class Cards:
    def __init__(self):
        self.deck_of_cards=["Spade","Heart","Club","Diamond"]
        self.number_on_Cards=[1,2,3,4,5,6,7,8,9,10,11,12,13,14]
    def draw(self):
        random_suit=r.choice(self.deck_of_cards)
        random_num=r.choice(self.number_on_Cards)
        while(random_num>=10):
            if random_num==11:
                return f'{random_suit} of jack'
            elif random_num==12:
                return f'{random_suit} of queen'
            elif random_num==13:
                return f'{random_suit} of king'
            elif random_num==14:
                return f'{random_suit} of ace'
            else:
                return f'{random_num} of {random_suit}'
    def compare_cards(self,card1, card2):
        num1 = int(card1.split()[0]) 
        num2 = int(card2.split()[0]) 
        if num1 > num2:
            return 1
        elif num1 < num2:
            return 2
        else:
            return 3
card=Cards()
print("Welcome to The Card Game Where You bet if Card Drawn By You is Higher or Lower Than Computer")
print("Beaware Computer Can Bluff!!!")
print("Computer will Also bet and try to get as Much as Money You Can Get!")
Money=1000
bet=0
while Money>0:
    drawn_card_user=card.draw()
    drawn_card_computer=card.draw()
    bluff=card.draw()
    Computer_Bet=r.randint(50,300)
    bet=int(input("Enter Your bet:"))
    if bet>Money:
        print("Enter A Valid Ammount Kid!!")
    while bet<=Money:
        result=card.compare_cards(drawn_card_user,drawn_card_computer)
        print("Your Drawn Card is :",drawn_card_user)
        print("Computer Drawn Card is: ",bluff)
        choices=input("Enter high,low,pass:").lower()
        if choices=='high':
            if result==1:
                print("You Win!")
                Money+=Computer_Bet
            else:
                print("You Lose!")
                Money-=Computer_Bet
        elif choices=='low':
            if result==1:
                print("You Win!")
                Money+=bet
            else:
                print("You Lose!")
                Money-=bet
        elif choices=='pass':
            print("Computer's True Card Was: ",drawn_card_computer)