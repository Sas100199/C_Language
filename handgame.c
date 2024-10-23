#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
    int main() {
        int   i=0,computer, computerad,user,userp=0,computerp=0;
       
        srand(time(0));
        
       
            printf("\t\tRock Papper and Scissors Game\n");
            printf("\tRules and regulations\n");
            printf("\t1. Rock beats scissors\n");
            printf("\t2. Scissors beats paper\n");
            printf("\t3. Paper beats rock\n");
            printf("\tEnter your choice as (1 for rock, 2 for paper, 3 for scissors):\n ");
            printf("-->The game will end after 3 rounds and you will win if you'll get 3 points <--\n\n\n");
                 char name[] ="";
        printf("Enter your name: ");
        // scanf("%s",name);
        gets(name);
        printf("%s, you have 3 points to win\n",name);
            while (i<3)
            {
                computer = rand() % 10 + 1;
                  
                 int compute[] = {1, 2,3};
        
        if(computer>=0 && computer <=3){

                computerad = compute[0];
        }
        else if(computer >3 && computer<=6){
            computerad = compute[1];

        }
        else{
            computerad = compute[2];

        }
    
                printf("Enter your choice (1 for rock, 2 for paper, 3 for scissors): ");
                scanf("%d",&user);
                if(computerad == user){
                        printf("Computer chose %d, it's a tie\n", computerad);

            }
            else if((user ==1 &&  computerad == 3) || (user==2 && computerad == 1 ) ||(user==3 && computerad == 2)){
                printf("Computer chose %d, you win\n", computerad);
                    userp++;
            }
            else if(!(user ==1 &&  computerad == 3) || !(user==2 && computerad == 1 ) ||!(user==3 && computerad== 2)){
                    printf("Computer chose %d, you lose\n", computerad);
                    computerp++;
            }
            i++;
            }
            if(userp>computerp){
                   printf("%s won the game with %d points\n",name, userp); 
            }
            else if(userp<computerp){
                printf("%s Computer won the game with %d points\n", name , computerp);
            }
            else{
                printf("%s It's a tie\n",name);
            }
    return 0;
}