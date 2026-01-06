//Sum Until Negative Number

//Write a C program that prompts the user to enter a series of numbers until they input a negative number. 
//Calculate and print the sum of all entered numbers using a do-while loop.

#include <stdio.h>

int main()
{
	int integers, sum=0;
	
	do
	{
		printf("Enter any  integer: (negative number to end): ");
		scanf("%d", &integers);
		 if(integers >=0)
		 {
		 	sum = sum + integers;
		 }
		
			
	} while(integers >= 0);
	
	printf("The sum of all the positive integers is: %d",sum);
	
	return 0;
}
