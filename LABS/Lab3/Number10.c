#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Finding the new value of investments.
double compound (double P,double n, double i); //defining the function that will find the compound interest
int main(void)
{
    double money_amt; //declaring the amount we will recieve from the compound function
    double years; //the amount of years that will be inserted by the user
    double invest;//the original investment that will be inserted by the user 
    double interest; //the interest rate used that is user inserted. 
    
    printf("Future Value of an Investment\n");
    printf("Enter the investment amount\n");
    scanf("%lg",&invest);
    printf("Enter the annual interest rate\n");
    scanf("%lg",&interest);
    printf("Enter the years of investment\n");
    scanf("%lg",&years); //asks the user to input values for invest, interest, and years that will be attributed to the function. 
   
    money_amt=compound(invest,years,interest); //using the compound function to atribe a value to money_amt
    printf("Investment:%g\n",invest);
    printf("Annual interest rate:%g\n",interest);
    printf("Years of investment:%g\n",years);
    printf("If you invest $%g at a %g percent interest rate; after %g years, the value will be %g\n",invest,interest,years,money_amt); //prints out all the variables used in the code and the answer that was found by the function
    
}

double compound(double P,double n, double i) //This function will calculate the compound interest based on user inserted values.
{
    double amount;
    amount= P*pow((1+(i/100)),n); //The formula for compound interest.You divide i(aka the interest) by 100 because it is a percentage and not a whole number. 
    return amount; //Returns the amount and fixes it to money_amt. 
}

