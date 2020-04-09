#include <stdio.h>
#include <stdlib.h>

// Make salaries readable

int main(void)
{
  int salary;
  int hundreds=salary%1000;
  salary=salary/1000;
  int thousands=salary%1000;
  salary=salary/1000;
  puts("Please enter your salary");
  scanf("%d",&salary);
  printf("Your salary is: %03d,%03d,%03d/n",salary,hundreds,thousands);
  
  return 0; 
   
}