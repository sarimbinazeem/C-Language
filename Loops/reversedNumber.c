//Reverse a Number

//Write a C program to reverse a given number using a do-while loop.

#include <stdio.h>

int main()
{
	int number, reversed=0, remainder;
	int original;
	
	printf("Enter any number: ");
	scanf("%d", &number);
	original = number;
	
	do
	{
		remainder = number %10; //To get the last digit
		
		// Build the reversed number by appending the extracted digit
		reversed = reversed*10 + remainder;
		
		// Remove the last digit from the original number
		number = number/10;
	} while(number!=0);
	
	printf("Original Number is: %d \n", original);
	printf("Reversed Number is: %d \n", reversed);
	
	return 0;
	
}