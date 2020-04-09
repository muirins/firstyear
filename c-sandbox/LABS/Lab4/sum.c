#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int x; 
    double term;
    double sum;
    printf("Summing 1/x^2 where x goes from 1 to 100.");
    for (x=1;x<=100;x++) // the loop will print the values needed until x reaches 100. 
    {
        printf("x=%i\n",x); //this will print the value of x
        term=1/pow(x,2); //this is the equation needed to find the term.
        printf("term=%g\n",term); //this prints out the answer to the equation above
        sum+=term;// the sum will be made from the term adding to itself.
        printf("sum=%g\n",sum); //the sum will be printed here.
    }
    return 0; 
}