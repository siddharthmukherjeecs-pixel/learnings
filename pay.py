students=[]
while True:
    print('welcome to the student management system')
    print('1.. Add student')
    print('2... View students')
    print('3.. Search student')
    print('4. Delete student')
    print('5. Exit')

    choice= int(input('Enter your choice: '))

    if choice == 1:
        name=input('Enter student name: ')
        students.append(name)
    
    elif choice ==2:
        for name in students:
            print(name)

    elif choice ==3:
        name=input('Enter student name to search: ')
        if name in students:
            print(f"{name} is found!!")
        else:
            print(f"{name} is not found!!")
    
    elif choice == 4:
        name = input('Enter student name to delete: ')
        if name in students:
            students.remove(name)
            print(f"{name} has been deleted.")
        else:
            print(f"{name} is not found!!")

    elif choice ==5:
        print('Exiting ....')
        break
