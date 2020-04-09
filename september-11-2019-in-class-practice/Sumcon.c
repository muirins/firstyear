#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sumOdd=0;
    int sumEven=0;
    int number=1;
    int max;
    printf("Input the maximum x values\n");
    scanf("%d",&max);
    while(number<=max)
    {
        if (number%2==0)
    {
       sumEven=sumEven+number;
    }
        else
    {
        sumOdd=sumOdd+number;
    }
        ++number;
    }
   printf("The sum of odd numbers is %d\n",sumOdd);
   printf("The sum of even numbers is %d\n",sumEven);
   printf("The difference is %d\n",(sumOdd-sumEven));
   return 0;
}