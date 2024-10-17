#include<stdio.h>

int main(){
    
    int math,phy,chem;
    int percent;

    printf("Welcome To Exam Validation \n\n\n");

    printf("Enter Your Maths Marks");
    scanf("%d",&math);
    printf("Enter Your Physics Marks");
    scanf("%d",&phy);
    printf("Enter Your Chemistry Marks");
    scanf("%d",&chem);

percent=(math+phy+chem)/3;


    if (percent>=90)
       {
           
   printf("You Are An Elite Student\n");
   printf("Your Percentage is %d",percent);
    printf("Remark:\n");
    //  printf("NIL");
        
       }
    else if(percent>50 && percent<=75){
        printf("Your Are a Good Student \t\t\t");
        printf("Remark:\n");
        printf("You have the Scope to Improve");
        printf("Your Percentage is %d",percent);
    }
       
    else if(percent>=40 && percent<=50){
        printf("Your Are a Average Student \t\t\t");
        printf("Remark:\n");
        printf("Don't Worry You acn become a topper , Never Give up");
        printf("Your Percentage is %d",percent);
    }
    else if(math<40 || phy<40 || chem<40 ){
 printf("You have Failed in One Of the Subjects");
 printf("Your MAths Marks are %d\n",math);
 printf("Your Physics Marks are %d\n",phy);
 printf("Your CHemistry Marks are %d\n",chem);
 printf("Remark:");
 printf("Scoe To Improve"); 
        
    }
    else{
        printf("You Have Failed");
        printf("Your Percentage is %d",percent);
        printf("Remark:\n");
        printf(" Kindly ReWrite The Exam");
    }
    return 0;
}