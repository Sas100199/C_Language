#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i=0, random ,guess;
    srand(time(0));

    random = rand()%100+1; 

    while (guess!= random)
    {
    printf("Guess the number"); 
        scanf("%d",&guess);

        if (guess>random)
        {
            printf("You went high");
        }
        else{
            printf("You went low");
        }
        i++;
    }
    printf("You have guessed after %d times",i);
    
    return 0;
}