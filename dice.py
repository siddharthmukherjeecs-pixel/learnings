import random

Choice = input("do you want to roll the dice? ")
if Choice.lower() == 'y':
    dice1 = random.randint(1, 6)
    print(f"The number you rolled is {dice1}")
elif Choice.lower() =='n':
    print('why did u even choose to pariticipate then')
else:
    print('invalid input')
        