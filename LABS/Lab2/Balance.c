#include <stdio.h>
#include <stdlib.h>
// Review an account and evaluate if the credit limit was exceeded
int main(void)
{
    int AccountNum; //Declaring the Account Number, Balance, charges, limit, and the final balance
    double Balance;
    double Charges;
    double Credits;
    double Limit;
    double NewBal;
   puts("Please Enter your Account Number (Type -1 to end)\n"); // Asks for the account number before anything else
   scanf("%d",&AccountNum); //inputs a value for AccountNum
    while(AccountNum!=-1) //Using while to ensure that the value for AccountNum=-1 means that the program will end
    {
    puts("Please Enter the beginning balance\n"); //User inputs the balance and other values
    scanf("%lg",&Balance);
      
    puts("Please Enter the amount of charges this month\n");
    scanf("%lg",&Charges);
     
    puts("Please Enter the amount of credits this month\n");
    scanf("%lg",&Credits);
      
    puts("Enter your credit limit\n");
    scanf("%lg",&Limit); 
  
    printf("Account: %d\n",AccountNum); //Uses the inputs entered for AccountNum and Limit earlier
    printf("Credit Limit: %g\n",Limit); 
    NewBal=Balance+Charges-Credits; //Calculates what the final Balance will be
    printf("Balance: %g\n",NewBal);
  
    if(NewBal>Limit) //Will print if the final Balance is greater than the user inputted limit
      {
          printf("Credit Limit Exceeded!\n");
      } 
    puts("Please Enter your Account Number (Type -1 to end)\n"); //Asks the user again for the account number so they can quit if they need to
    scanf("%d",&AccountNum);
    }
   
    return 0; //Ends the program. 
}