//Write a program that takes a number as input and prints the multiplication table from 1 up to that number. Each row and column should display the product of the corresponding numbers in a neatly aligned format.

#include <stdio.h>

int main()
{
	//Initializing
	int n;
	
	
	//Input
	printf("Enter A Number: ");
	scanf("%d",&n);
	
	printf("Multiplication Table Upto %d\n\n", n);
	
	//Looping to print a format
	for (int j = 1; j <= 10; j++) 
	{
        printf("%5d", j);
    }
    
    printf("\n--------------------------------------------------------------\n");
	
	//looping to print the chart
	for(int i=1 ; i <=n ; i++)
	{
		printf("%d |", i);
		for(int j=1 ; j<=10 ; j++)
		{
			printf("%5d",i*j);
		}	
		
		printf("\n");
	}	

	return 0;
}