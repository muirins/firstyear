#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pass=0;
    int failure=0;
    int students=1;
    int result;
    
    while (students<=10)
    {
        printf("What is the result of student %d? 1=pass 2=fail\n",students);
        scanf("%d",&result);
        if(result==1)
        {
            pass=pass+1;
        }
        else
        {
           failure=failure+1; 
        }
        ++students;
    }
    printf("Passed:%d\n",pass);
    printf("Failed:%d\n",failure);
    if(pass>8)
    {
        printf("Bonus to the instructor!\n");
    }
return 0;
}