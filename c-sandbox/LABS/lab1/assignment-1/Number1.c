#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output */

int main(void)
{
    const double PI=3.1415927;
   
    double radius;   /* Declare radius and height*/
    double height;
    puts("Please enter the radius and height");    // Insert prompt for user to enter values
    scanf("%lg%lg",&radius, &height);    //The user inputs their values
    double surface_area=2*PI*radius*height+2*PI*radius*radius;   // Declare and initialize surface area
  
    printf("Radius: %g Height: %g\n", radius, height);

    printf("The surface area is: %lg\n",surface_area);    // Calculating the surface area based on inputs
    return 0;
}
