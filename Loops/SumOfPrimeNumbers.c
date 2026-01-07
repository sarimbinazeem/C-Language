// Sum of Prime Numbers

//Write a C program that calculates and prints the sum of prime numbers up to a specified limit (e.g., 50) using a do-while loop.

#include <stdio.h>

int main()
{
	int number=2,sum=0,limit,isPrime=1;
	
	printf("Enter a limit: ");
	scanf("%d", &limit);
	
	if(limit<2)
	{
	 printf("Limit Too Low! \n");
	
	}
	
	do
	{
		isPrime=1;
		for (int i =2; i<= number/2 ; i++)
		{
			if (number % i == 0)
			{
				isPrime = 0;
				break;
			}
			
			
		}
		
		if(isPrime == 1)
		{
			printf("Number %d is prime! \n", number);
			sum = sum + number;
		}
		number ++;
	} while(number<=limit);
	
	printf("The sum of the prime numbers till %d is %d ", limit, sum);
	
	return 0;
}