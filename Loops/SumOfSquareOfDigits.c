//Sum of Squares of Digits

//Write a C program that prompts the user to enter a positive integer and 
//then calculates and prints the sum of the squares of each digit in that number using a do-while loop.						

#include <stdio.h>										

int main()
{
	int number, digit,square, sum = 0;
	int original ;
	do
	{
		printf("Enter a positive integer: ");
		scanf("%d", &number);
	} while(number<=0);
	
	original = number;
	
	do
	{
		digit = number % 10;
		
		square = digit * digit;
		sum = sum + square;
		
		number = number/10;
	}
	while (number != 0);
	
	printf("The sum of square of the digits of %d is %d", original , sum );
	
	return 0;
}