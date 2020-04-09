#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int X;
 puts("Enter a number.\n");
 scanf("%d",&X);
 if (X%2==0)
 {
     printf("The number is even\n");
 }
 else
 {
     printf("The number is odd\n");
 }
  return 0;
}