#include <stdio.h>
#include <stdlib.h>
// Find the total of inserted integers
int main (void)
{
   int count=0;
   int countmax;
   int integer;
   int total;
   puts("How many integers will be counted?\n"); //Sets the total count of integers
   scanf("%d",&countmax);
   while(count!=countmax) //Keeps the program running and adding integers
   {
       puts("Enter an integer\n");
       scanf("%d",&integer);
       total+=integer; //will add each new integer input with the previous ones
       ++count; //increases the count so that the loop doesn't run forever
   }
  printf("The total is:%i\n",total);//Prints the total of the inputted integers
   return 0;   
}