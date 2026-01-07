//Count Digits in a Number

//Write a C program that implements a program to count the number of digits in a given integer using a do-while loop.

#include <stdio.h>

int main()
{
	int number, count=0;
	
	printf("Enter any number: ");
	scanf("%d", &number);
	
	do
	{
		number = number/10;
		count++;
		
	} while(number !=0);
	
	printf("The total number of digits are: %d",count);
	return 0;
}