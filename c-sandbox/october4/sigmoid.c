#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sig(double s); //Declares the sigmoid function that will be used in the program

int main (void)
{
  double s; //Declares s and sigmoid, the values needed for this program
  double sigmoid;
 
  printf("Please enter a number\n");
  scanf("%lg",&s); //Assigns the user input to the variable s
  
  sigmoid=sig(s); //Will use the sigmoid function we made in order to assign the value to the variable sigmoid
  printf("sigmoid(%g)=%g\n",s,sigmoid); //prints the input value for s and the answer we get from the sigmoid function
}

double sig(double s)
{
 double result; 
 result= 1/(1+exp(-s)); //The sigmoid formula that will be used in the main. 
 return result;
}