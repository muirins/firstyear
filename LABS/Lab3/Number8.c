#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ssrate 7.51/100
#define fedrate 16.5/100
#define staterate 4.5/100 //Defining the tax rates for social security, federal and state

double taxable(double gross_pay,double medical_plan);
double social(double tax);
double federal(double tax);
double state(double tax);
double takehome(double tax, double sr, double fed,double ss, double united_fund); //Declaring different functions that will give the answers to user input 

int main(void)
{
    double gross_pay,take_home,social_security,medical_plan,federal_income,state_income,united_fund, tax; //declaring the different variables that will be used 
   
    printf("Paycheck Calculations\n");
    printf("Please input your gross pay\n"); //Asking the user to input a value that will be stored for the gross pay
    scanf("%lg",&gross_pay);
    gross_pay>1500;
    if (gross_pay<=1500) //Ensuring that the user inputs another value if they enter a value that is less than or equal to 1500
    {
        printf("Gross pay must be greater than 1500. Try again\n");
        scanf("%lg",&gross_pay);
    }
    tax=taxable(gross_pay,medical_plan); //Defining how to get the values for the different variables, utilizing the functions we declared earlier
    medical_plan=75.65;
    united_fund=15;
    social_security=social(tax);
    federal_income=federal(tax);
    state_income=state(tax);
    take_home=takehome(tax,state_income,federal_income,social_security,united_fund);
    
    printf("Social Security tax:%g\n",social_security); //printing the results
    printf("Federal Income tax:%g\n",federal_income);
    printf("State Income tax:%g\n",state_income);
    printf("Medical deduction: %g\n",medical_plan);
    printf("United Fund:%g\n",united_fund);
    printf("Take-home pay:%g",take_home);
    return 0; 
}

double taxable(double gross_pay, double medical_plan) //This function will be used to be the main value for every other function. This will be done first. 
{
    double tax; 
    tax=gross_pay-medical_plan;
    return tax;
}

double social(double tax) //Calculates the Social security tax amount
{
    double ss;
    ss=tax*ssrate;
    return ss;
}

double federal(double tax) //Calculates the federal income tax amount 
{
  double fed;
  fed=tax*fedrate;
  return fed;
}

double state(double tax) //Calculates the state income tax amount 
{
  double sr;
  sr=tax*staterate;
  return sr;
}

double takehome(double tax, double sr, double fed,double ss, double united_fund) // Calculates the take home pay from all of the other values found in the other functions, subtracts that from the united fund. 
{
  double home;
  home=tax-(sr+fed+ss)-united_fund;
  return home;
}
