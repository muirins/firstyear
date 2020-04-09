#include <stdio.h>
#include <stdlib.h>
int add(int a,int b);

int main(void)
{
   int number1;
   int number2;
   int number3;
   int total;
  
   puts("Please enter the first number\n");
   scanf("%d",&number1);
   
   puts("Please enter the second number\n");
   scanf("%d",&number2);
  
   puts("Please enter the third number\n");
   scanf("%d",&number3);
  
   total= add(number1,number2); //utilizing the add function we made. The function call.
   total=add(number1,number2)+number3;
   printf("The total is %i\n",total);
 return 0; 
}
int add(int a,int b)
{
   int result;
   result= a+b;
   return result; 
}
