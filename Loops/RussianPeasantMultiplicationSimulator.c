//Write a C program that multiplies two positive integers using an iterative halving-and-doubling method instead of the direct * operator. The program should take two integers as input, determine which one is smaller and which one is larger, and then repeatedly divide the smaller number by 2 while doubling the larger number. During each step, if the current value of the smaller number is odd, the corresponding value of the larger number should be added to a running total. The program should display each step in a tabular form showing the current values and whether an addition occurred, and finally print the total sum as the result of the multiplication. To approach this problem, think about how integer division and modulo can help identify odd numbers, how loops can model repeated halving and doubling, and how conditional logic controls when values contribute to the final result.
#include <stdio.h>

int main()
{
	int n1,n2,small,large,sum=0;
	
	printf("Enter Number 1: ");
	scanf("%d",&n1);
	
	printf("Enter Number 2: ");
	scanf("%d",&n2);
	
	if (n1<n2 )
	{
		small = n1;
		large = n2;
	}
	else if (n2<n1)
	{
		small = n2;
		large =n1;
	}
	
	printf("\nSmall\tLarge\tAdded?\n");
    printf("------------------------\n");
    
	while(small>=1)
	{
		if(small %2 != 0 ) //We add the large number only when the small number is odd because that’s when its 
		     			//current binary digit is 1, meaning that multiple should contribute to the final product.
		{
			sum += large;
			printf("%d \t %d \t Yes \t\n",small,large);
		}
		else
		{
			printf("%d \t %d \t No \t\n",small,large);	
		}
		
		small /=2;
		large *=2;
	}
	
	printf("The Total Is: %d",sum);

	return 0;
}