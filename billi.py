import random
meow = random.randint(1,100)
case = False

while case == False:
 choice =int(input('guess number: '))

 if choice == meow:
  print('YOU HAVE WONNN 🎉')
  break

 else:
  if choice >meow:
   print('guess is high')

  elif choice < meow:
   print('guess is low')


