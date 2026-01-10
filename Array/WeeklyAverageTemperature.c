//Write a C program that stores temperature readings for a week using a two-dimensional array, where each day has multiple readings. The program should take input for all readings, then calculate and display the average temperature for each day based on the readings entered. The solution should clearly separate input and processing using nested loops.

#include <stdio.h>
#define week 7
#define times 2

int main()
{
	//Declaring Array
	float readings[week][times];
	
	//Loop to take input for Array
	printf("----------------------Weekly Temperature Readings----------------------\n\n");
	for(int i=0; i<week ; i++)
	{
		printf("\n--- Day %d ---\n", i + 1);
		for (int j=0; j< times; j++)
		{
			printf("Enter Reading %d: ",j+1);
			scanf("%f",&readings[i][j]);
		}
	}
	
	//Taking Sum for Average By Looping
	for(int i=0; i<week ; i++)
	{
		float total =0;
		printf("----------------------Day %d----------------------\n",i+1);
		for (int j=0; j< times; j++)
		{
			total += readings[i][j];
		}
		
		printf("Average Temperature: %.2f",total/times);
		
		printf("\n");
	}
	
	return 0;
}