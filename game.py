print('welcome to my computer quiz!')
playing = input('do you wanna play?:').lower()

if playing != 'yes':
    quit()

print('LET THE GAME BEGIN!')
score = 0

answer = input('what does CPU stand for?: ').lower()
if answer == 'central processing unit':
    print('correct!')
    score += 1
else:
    print('incorrect!')

answer = input('what does GPU stand for?: ').lower()
if answer == 'graphics processing unit':
    print('correct!')
    score += 1
else:
    print('incorrect!')


answer = input('what does RAM stand for?: ').lower()
if answer == 'random access memory':
    print('correct!')
    score += 1
else:
    print('incorrect!')


print(f"you got {score} questions correct!")
