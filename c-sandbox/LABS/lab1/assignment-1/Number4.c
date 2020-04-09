#include <stdio.h>
#include <stdlib.h>

//Calculate the dollar amount of user inputted coins

int main(void)
{
    int q,d,n,p; //Declare quarters,dimes, nickels, and pennies
    
    puts("How many quarters do you have?");  // Asks the user to input the amount of coins they have
    scanf("%i",&q);
    puts("How many dimes do you have?");
    scanf("%i",&d);
    puts("How many nickels do you have?");
    scanf("%i",&n);
    puts("How many pennies do you have?");
    scanf("%i",&p);
    
    double cash_amount=0.25*q+0.10*d+0.05*n+0.01*p;   //Calculates the cash amount
    printf("Having %i quarters, %i dimes, %i nickels, and %i pennies, the total is $%lg\n",q,d,n,p,cash_amount);  //Prints the amount to the user
    return 0;
}