//Write a program that takes a number as input and prints the multiplication table from 1 up to that number. Each row and column should display the product of the corresponding numbers in a neatly aligned format.

#include <stdio.h>

int main()
{
	long long number;
	
	printf("Enter Stopping Number: ");
	scanf("%1lld", &number);
	
	for(long long i=1; i<=number; i++)
	{
		for(long long j=1 ; j<=number; j++)
		{
			printf("%8lld", i*j);
		}
		printf("\n");
	}
	
	return 0;
}