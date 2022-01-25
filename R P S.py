import random

print('''\nRock Paper and Scissors ✌️✌️
Winning Rules for the game is:-
1.Rock vs Paper :- Paper winner
2.Rock vs Scissor :- Rock winner
3.Paper vs Scissor :- Scissor winner
''')

while True:
    print("Enter Choice:-\n 1. For Rock\n 2. For Paper\n 3. For Scissor")
    
    choice = int(input("Enter the choice:- "))
    
    while choice>3 or choice<1:
        choice = int(input("Enter valid choice:- "))

    if choice==1:
        chosen = "ROCK"
    elif choice==2:
        chosen = "Paper"
    else:
        chosen = "Scissor"

    print('User has chosen:-',chosen)
    print('\nNow Computer turn.......')

    comp_choice = random.randint(1, 3)

    while comp_choice == choice:
        comp_choice = random.randint(1, 3)

    if comp_choice == 1:
        comp_chosen = "Rock"
    elif comp_choice == 2:
        comp_chosen = "Paper"
    else:
        comp_chosen = "Scissor"

    print("Computer chosen:- ",comp_chosen)
    print(chosen, comp_chosen, sep=' vs ', end='\n')

    if (choice == 1 and comp_choice == 2) or (choice == 2 and comp_choice == 1):
        print("✌Paper Wins✌")
        result = 'Paper'
    elif (choice == 1 and comp_choice ==3) or (choice == 3 and comp_choice == 1):
        print("✌Rock Wins✌")
        result = 'Rock'
    else:
        print("✌Scissor Wins✌")
        result = 'Scissor'

    if (result == chosen):
        print("<== User Wins ==>❤\n")
    else:
        print("<== Computer Wins ==>❤\n")

    a = input("IF YOU WANT TO PLAY AGAIN TYPE (Y) ELSE TYPE (N):- ")      
    b = 'y'
    c = 'Y'
    if (a=='y' or a=='Y'):
        continue
    elif (a=='n' or a=='N'):
        break
    elif (b>a or b<a or c>a or c<a):
        print("Enter a valid input:- ")
        x = input("IF YOU WANT TO PLAY AGAIN TYPE (Y) ELSE TYPE (N):- ")
        if (x!='y' or x!='Y'):
            break
