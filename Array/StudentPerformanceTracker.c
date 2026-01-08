//Write a C program that uses a one-dimensional array to store the marks of 10 students. The program should take marks as input (ensuring each value is between 0 and 100), calculate the class average, determine the highest and lowest marks, and finally display all student scores along with a summary showing the average, highest, and lowest marks.

#include <stdio.h>
#define SIZE 10

int main()
{
	//Initializing varaibles 
	int marks[SIZE],highest,lowest;
	float average, sum =0;
	
	//loop for input, calculating sum and finding max and min
	for (int i=0; i<SIZE ; i++)
	{
		printf("Enter marks of Student %d (0-100): ",i+1);
		scanf("%d", &marks[i]);
		
		//LOOP for valid input
		while(marks[i] >100 || marks[i]<0 )
		{
			printf("Enter Valid Marks! (0-100): ");
			scanf("%d", &marks[i]);
		}
		//Sum
		sum = sum + marks[i];
		
		//Highest and lowest
		if(i==0)
		{
			highest = marks[i];
			lowest = marks[i];
		}
		
		
		//Conditions to assign highest and lowest marks
		if(marks[i] >= highest)
		{
			highest = marks[i];
		}
		if (marks[i]<=lowest)
		{
			lowest = marks[i];
		}
	}
	
	//Printing The Array
	printf("\nThe scores of %d students are: ", SIZE);
	for (int i=0; i<SIZE ; i++)
	{
		printf("%d ", marks[i]);
	}
	
	//Calculating Average
	average = sum/SIZE;
	
	//Final Summary
	printf("\n--------------------SUMMARY--------------------");
	printf("\n The Average of The Class is: %.2f", average);
	printf("\n The Highest in The Class is: %d", highest);
	printf("\n The Lowest in The Class is: %d", lowest);
	
	return 0;
}