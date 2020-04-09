#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

double sig(double x);
double adhoc(double x); //declares the sigmoid function and the adhoc function

int main(void)
{
    double x;
    double adhoc_func; //Declares the two functions that we'll need in main and the functions
    
    printf("Please enter a value\n");
    scanf("%lg",&x); //The user inputs a value that will be assigned to x
    adhoc_func=adhoc(x); //The answer will be found using the adhoc function
    printf("adhoc(%g)=%g\n",x,adhoc_func); //Prints the value inputted and the answer for the adhoc function 
}

double sig(double x)
{
    double sigmo;
    sigmo=1/(1+exp(-x));
    return sigmo; //Defines what the sig function is. This function will be used in the adhoc function
}

double adhoc(double x)
{
    double result;
    if (x<=0) //If the user input value is less than or equal to 0, the adhoc function will carry out this equation
  {
      result=sin(x)+0.5;
      return result;
  }  
    if (x>0) //If the user input value is greater than 0 , the adhoc function will perform the sig function. 
    {
        result=sig(x);
        return result;
    } //The adhoc function will assign a value to adhoc_func in main from one of these condition statements depending on the value of x.
}
