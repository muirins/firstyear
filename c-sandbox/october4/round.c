#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

double myround(double x); //declares the myround function that will be used 

int main(void)
{
    double x, my_round; //declares two variables
    printf("Enter a value\n");
    scanf("%lg",&x); //The user input will be assigned to the x variable that is used in the myround function and in main.
    
    my_round=myround(x); //The my_round variable will have a value assigned from the result of the myround function
    
    printf("myround(%g)=%g\n",x,my_round);
    printf("round(%g)=%g\n",x, round(x)); // Will print out the myround function result and the regular round result
    
    return 0; 
}

double myround(double x)
{
    double answer;
    if (x-floor(x)>=0.5) //If the inputted value of x minus the floor value of x is greater than or equal to 0.5, the function will return the ceil value of x. 
    {
        answer=ceil(x);
        return answer;
    }
    else 
    {
       answer=floor(x); //Otherwise, the function will return the floor value of x. 
       return answer;
    }
}