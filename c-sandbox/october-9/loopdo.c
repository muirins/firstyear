#include <stdio.h> 
#include <stdlib.h>
int whileloop(int x);
int dowhileloop(int x);
int forloop(int x);

int main(void)
{
    int x=5;
    whileloop(x);
    printf("-------\n");
    dowhileloop(x);
    printf("-------\n");
    forloop(x);
    return 0;
}

int whileloop(int x)
{
    int y;
    while(y<x)
    {
        y++;
        printf("%i\n",y);
        
    }
}

int dowhileloop(int x)
{
    int y=0;
    do 
    {
       y++;
       printf("%i\n",y);
    } while(y<x);
}

int forloop(int x)
{
    int y;
    for(y=0;y<=x;++y)
    {
        printf("%i\n",y);
    }
}