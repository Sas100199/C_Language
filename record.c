#include<stdio.h> 
    int main() {
  
  // int num, result;
  // printf("Enter a number: ");
  // scanf("%d",&num);
  // result = reverse(num);
  // printf("Reversed number: %d",result);  // Output: 1234567890

// Leap Year Checker

  // int inp;
  // printf("Enter a Year: ");
  // scanf("%d",&inp);
  // if((inp%4==0) && (inp%100!=0) || (inp%400==0) ){
  //   printf("%d is a leap year",inp);
  // }
  // else{
  //   printf("%d is not a leap year",inp);
  // }
 
//  Average of n numbers

// int i=0, n, sum=0;float avg;
//   printf("Enter the number of elements: ");
//   scanf("%d",&n);
//   for(i=1; i<=n; i++){
//     sum+=i;
//   }
//   avg= sum/n;
//   printf("Average Of %d nos is  %.2lf ",n,avg);

//Multiplication table of given number

// int i =0, multiples, table ;

//   printf("Enter which table you want to print: ");
//   scanf("%d",&table);
//   printf("Enter the number of multiples: ");
//   scanf("%d",&multiples);
//   printf("Printing the table of %d\n",table);
//   for(i=0;i<=multiples; i++){
//     printf("%d x %d = %d \n",table,i,table*i);
//   }

//  Printing First n prime numbers

      // int prime=1,  i , n , count = 0, num = 2; 

      // printf("no of prime numbers: ");
      // scanf("%d", &n);


      // while(count<n){
      //     prime=1;
      //     for(i=2;i<=num/2;i++){
      //       if(num%i==0){
      //         prime=0;
      //         break;
      //       }
      //     }
      //     if(prime){
      //       printf("%d ", num);
      //       count++;
      //     }
      //     num++;
      // }



// Armstrong Number Checker

int n,j ,nd=0 , i =0 ,armstrong=0,digit, check=0; 
  printf("Enter a number: ");
  scanf("%d",&n);
  int original = n ; 
  // while (n>0)
  // {
  //   j= n%10 ;
  //   n/=10;
  //   nd++;
 
  // }
      n = original;
    for(i=0;i<3;i++){
          digit = n%10;
         armstrong += digit*digit*digit;
         n/=10;   
                                   
    }
    if(armstrong==n){
      printf(" %d is an Armstrong number",n);
    } 
    else{
      printf("%d is not an Armstrong number",n);
    }




  return 0;
            
}

// int reverse(int n){ 
// int rev =0 ; 
//  int dig ;
//  while (n!=0)
//  {
//    dig = n%10;
//   rev = rev*10+dig;
//   n/=10;
//  }
//  return rev;

// }