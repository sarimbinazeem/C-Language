 //Sum of Positive Integers Until 0

//Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. 
//Calculate and print the sum of all positive integers entered.

#include <stdio.h>

int main()
{
	int integers, sum=0;
	
	do
	{
		printf("Enter any positive integer: (0 to end) ");
		scanf("%d", &integers);
		
		while(integers<0)
		{
			printf("Enter a positive integer!: ");
			scanf("%d", &integers);
		}
		
		sum = sum + integers;
	} while(integers != 0);
	
	printf("The sum of all the positive integers is: %d",sum);
	
	return 0;
}