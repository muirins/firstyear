#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415927 //Defining pi, which will be used in most of the functions
double circ(double d);
double radi(double d);
double surf_a(double d, double rad);
double vol(double rad); // Declares functions that will be used in the main program

int main (void)
{
    double d, radius,surface_area, circumference, volume; //Declares the differrent values that will be used. 
    printf("A Spherical Study\n");
    printf("Enter the diameter of the sphere\n");
    scanf("%lg",&d); //Assigns the user inputted value to variable d. 
    d>=0;
    if (d<0) //Will ask the user to input another value if it is less than 0
    {
        printf("Try again, the diameter must be greater than or equal to 0\n");
        scanf("%lg",&d);
    }
    
    radius=radi(d);
    circumference=circ(d);
    surface_area=surf_a(d,radius); 
    volume=vol(radius); //Using the functions we declared before to assign values to the different variables in main
    
    printf("A sphere with a diameter of %g has\n",d);
    printf("Radius=%g\n",radius);
    printf("Circumference=%g\n",circumference);
    printf("Surface area=%g\n",surface_area);
    printf("Volume=%g\n",volume); //Prints out the values
 
 return 0; 
    
}

double circ(double d)
{
    double result;
    result= PI*d;
    return result; //This is the function that will give the circumference of whatever sphere the user defined. 
}

double radi(double d)
{
    double rad;
    rad= d/2;
    return rad; //The function that finds the radius 
}

double surf_a(double d, double rad)
{
    double surf;
    surf=4*PI*pow(rad,2);
    return surf; // The function that finds the surface area, using the radius found in the previous function. 
}

double vol(double rad)
{
    double vol;
    vol=(4*PI/3)*pow(rad,3);
    return vol; // The function that finds the volume from the radi/radius function. 
}