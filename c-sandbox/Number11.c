
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Find the probability from a set mu and sigma. 

#define mu 10.71
#define sigma 1.14
#define PI 3.14159265358979323846 //Declares some constants that will be used in the code. 

double prob(double x, double D); //This function will find the probability.
double d(double x); //This function will find d, which will be needed in the probability function.

int main(void)
{
    double x;
    double D;
    double probability; //Declares variables for the x value, d value, and probability.
    printf("Probability of x given mu=10.71 and sigma 1.14\n");
    printf("Enter the value of x:\n"); //Will ask the user to input a value for the variable x.
    scanf("%lg",&x);
    D=d(x); //Carries out the d function that will be used in the probability function
    probability=prob(x,D); //Carries out the probability function and sets it to the variable probability 
    printf("The probability of %g in this distribution is %g.\n",x,probability); //Prints out the entered x value and the probability found. 
    return 0;
}
double d(double x) //the function that finds d. 
{
    double ans;
    ans=(pow((x-mu)/sigma,2))/2;
    return ans;
}

double prob(double x,double D) //the function that finds the probability of a given x value. 
{
    double result;
    result=(1/(sigma*(sqrt(2*PI))))*(exp(-D));
    return result;
}