//CompoundInterest
//Write a C program that calculates the compound interest for a given principal amount, interest rate, and time period. 
//Use a do-while loop to allow the user to input values multiple times.

#include <stdio.h>
#include <math.h>

int main()
{
	double principal, rate, amount, time,CI;
	int flag;
	
	do
	{
		printf("Enter Principal Amount: ");
		scanf("%lf", &principal);
		
		printf("Input time in years: ");
		scanf("%lf", &time);
		
		printf("Input rate in percentage: ");
		scanf("%lf", &rate);
		
		CI = (principal * pow(1 + rate/100, time)-principal);
		
		printf("Compound Interest: %.2lf \n",CI);
		
		printf("Want to calculate compound interest again? (1 for Yes, 0 for No): ");
        scanf("%d", &flag);
	} while(flag !=0);
	
	printf("Thank you for using the Compound Interest Calculator!\n");
	return 0;
}