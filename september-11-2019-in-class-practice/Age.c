#include <stdio.h>
#include <stdlib.h>
//Practice condition statements with age.

int main(void)
{
        int Age; //Declare age as an integer
        puts("What is your age?\n"); //Asks the user to input their age
        scanf("%d",&Age); //Scans for the variable to input for age.
        if (Age<100)
        {
            printf("You are pretty young!\n"); //If the value for Age is less than 100, it will print this statement
        }
        else if (Age==100)
        {
            printf("You are old!\n"); //If the value is equal to 100, it will print this
       }
        else
        {
            printf("You are really old!\n"); //If the value is greater than 100 it will print this
        }
        return 0;
}
