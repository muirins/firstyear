#include <stdio.h>
#include <stdlib.h>

double print_all(double array[], int size);
double average(double array[],int size);
int main (void)
{
    double grades[6];
    printf("Enter 6 grades\n");
    int x;
    for(x=0;x<6;x++)
    {
        scanf("%lg",&grades[x]);
    }
    print_all(grades,6);
    average(grades,6);
}

double print_all(double array[],int size)
{
    printf("Displaying the grades!\n");
    int y;
    for (y=0;y<size;y++)
    {
        printf("%lg\n",array[y]);
    }
    return 0;
}
double average(double array[],int size)
{
    double avg=0;
    int z;
    for(z=0;z<size;z++)
    {
        avg+=array[z];
    }
    avg=avg/size;
    printf("The average is: %lg\n",avg);
}