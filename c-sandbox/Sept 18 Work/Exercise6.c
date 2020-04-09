#include <stdio.h>
#include <stdlib.h>
//Calculate a person's age from their birth date and the current date
int main(void)
{
    int AgeY; //The age in years
    int AgeM; // The age in months
    int AgeD; // The age in days
    int BMM; //Birth month variable
    int BDD; //Birth day variable
    int BYYYY; //Birth Year variable
    int CMM; //Current month variable
    int CDD; //Current day variable
    int CYYYY; //Current year variable
    1<=BMM && BMM<=12;
    1<=CMM && CMM<=12;
    if (CMM=02)
    {
       1<=CDD && CDD<=28
        if (CMM=04||CMM=06||CMM=09||CMM=11)
        {
            1<=CDD && CDD<=30
        }
    else
    {
        1<=CDD && CDD<=31
    }
   
    }
    if (BYYYY<CYYYY)
    {
        AgeY=CYYYY-BYYYY;
        if (BMM<CMM)
        {
            AgeM=CMM-BMM;
            else
            {
                AgeM=CMM-BMM-1;
            }
        }
        if (BDD<CDD)
        {
            AgeD=CDD-BDD;
            else
            {
               AgeD=CDD-BDD-1;
            }
        }
    }
   else
   {
       printf("You are not born yet! Please Try again")
   }
}