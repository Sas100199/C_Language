import random

i = 0
computer=0
computerad=0
user=0
userp =0
computerp = 0


print("\t\tRock Papper and Scissors Game\n")
print("\tRules and regulations\n")
print("\t1. Rock beats scissors\n")
print("\t2. Scissors beats paper\n")
print("\t3. Paper beats rock\n")
print("\tEnter your choice as (r for rock, p for paper, s for scissors):\n ")
print("-->The game will end after 3 rounds and you will win if you'll get 3 points <--\n\n\n")

name = input("Enter Your Name")
rounds = int(input("How many Rounds do you want to play"))

print(f"{name}, you have to get more than the computer to win\n")
rps =['r','p','s']
rps_map= {'r':"rock" ,'p' :"paper" ,'s' :"scissors"}

while i < rounds :
        # random_number = random.randint(1,3)
        # computer = rand() % 10 + 1;
        # print(random_number)
        computer_choice = random.choice(rps)


        print("Enter your choice (r for rock, p for paper, s for scissors): ")
        user = input("Enter your choice")


        if computer_choice == user :
            print(f"**Computer chose {rps_map[computer_choice]}, it's a tie\n")


        elif (user == 'r' and computer_choice == 's') or (user == 'p' and computer_choice == 'r' ) or (user == 's' and computer_choice == 'p'):
             print(f"**Computer chose {rps_map[computer_choice]},and you chose {user} you win\n")
             userp+=1

        elif not(user == 'r' and computer_choice == 's') or not(user == 'p' and computer_choice == 'r' ) or not(user == 's' and computer_choice == 'p'):
            print(f"**Computer chose {rps_map[computer_choice]},and you chose {user} you lose\n")
            computerp+=1

        i+=1

if userp > computerp :
       print(f"{name} won the game with {userp} points\n" )

elif userp < computerp :

    print(f"{name}Computer won the game with {computerp} points\n")

else :
     print(f"{name} It's a tie Your's Score is {userp} and Computer score is {computerp}\n")



