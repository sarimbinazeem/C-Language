// Write a C program that tracks a person’s daily calorie intake over a week using arrays and functions. The program should prompt the user to enter the number of calories consumed each day for seven days, ensuring that all inputs are non-negative values.

// After collecting the data, calculate the total weekly calorie intake and compute the average calories consumed per day. The program should demonstrate the use of one-dimensional arrays, input validation, user-defined functions, and basic arithmetic operations to analyze fitness progress.


#include <stdio.h>
#define WEEK 7

void inputCalories(int calories[WEEK]);
float averageCalories(int total);

int main()
{
	int calories[WEEK],total;
	float average;
	
	printf("\n\n==========Fitness Progress Tracker==========\n");
	inputCalories(calories);
	
	total = totalCalories(calories);
	average = averageCalories(total);
	
}

void inputCalories(int calories[WEEK])
{
	for(int i=0; i<WEEK; i++)
	{
		printf("Enter Calories For Day %d: ",i+1);
		scanf("%d",&calories[i]);
		
		while(calories[i]<0)
		{
			printf("Invalid Input! Enter Postive Integer: ");
			scanf("%d",&calories[i]);
		}
	}
}

int totalCalories(int calories[WEEK])
{
	int total =0;
	for(int i=0; i<WEEK; i++)
	{
		total += calories[i];
	}
	
	return total;
}

float averageCalories(int total)
{
	float avg = (float)total/WEEK;
	return avg;
}

