import random
rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

player = int(input("0 for rock, 1 for paper, 2 for scissors: "))
game = [rock, paper, scissors]
if player not in [0, 1, 2]:
    print("Invalid choice")
else:
    computer = random.randint(0, 2)

    print(game[player])
    print(game[computer])

if player == computer:
    print("It's a draw")
elif (player == 0 and computer == 2) or (player == 1 and computer == 0) or (player == 2 and computer == 1):
    print("You win!")
else:
    print("You lose!")  
    

