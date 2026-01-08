//Write a C program that stores the weights of multiple luggage bags in an array. The program should take input for the weight of each bag, ensuring that the weight is not negative. It should then check each bag against a maximum allowed weight limit and identify which bags are overweight. Finally, display the weight status of each bag and print the total number of overweight bags.

#include <stdio.h>
#define LUGGAGE 6
#define MAX_WEIGHT 25

int main()
{
	int weight[LUGGAGE], overweight =0;
	
	for (int i=0; i<LUGGAGE ; i++)
	{
		printf("Enter Weight Of Luggage %d: ",i+1);
		scanf("%d", &weight[i]);
		
		while(weight[i]<0)
		{
			printf("Enter Valid Input!: ");
			scanf("%d", &weight[i]);
		}
	}
	
	for(int i =0 ; i<LUGGAGE ; i++)
	{
		if(weight[i] > MAX_WEIGHT)
		{
			printf("Bag %d: %d kg - OverWeight\n", i+1, weight[i]);
			overweight++;
		}
		else
		{
			printf("Bag %d: %d kg \n",i+1,weight[i]);
		}
	}
	
	printf("Numer Of Overweight Bags: %d\n",overweight);
	
	return 0;
}