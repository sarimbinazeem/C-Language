// Write a C program that tracks a user’s weekly fitness progress using arrays and functions. The program should record daily calorie burn for a week (7 days), validate that all inputs are non-negative, and allow the user to repeat the process for multiple weeks.

// For each week, the program should:

// Take daily calorie input for all 7 days,

// Calculate the total and average calories burned,

// Determine the most active day (the day with the highest calories),

// Provide feedback based on the average calories burned,

// Display a detailed weekly summary including daily calories, total calories, average calories, and the most active day.

// The program should be menu- or loop-driven to allow tracking progress across multiple weeks until the user chooses to exit, demonstrating the use of arrays, loops, conditional statements, and user-defined functions.

#include <stdio.h>
#define WEEK 7

void inputCalories(int calories[WEEK]);
int totalCalories(int calories[WEEK]);
float averageCalories(int total);
int activeDay(int calories[WEEK]);
void feedback(float average);
void displaySummary(int calories[WEEK], int total, float average, int active);

int main()
{
	int calories[WEEK],total, active,i=1,choice;
	float average;
	
	do
	{
    printf("\n\n==========Fitness Progress Tracker==========\n");
	printf("\n-----Week %d-----\n",i);
	inputCalories(calories);
	
	total = totalCalories(calories);
	average = averageCalories(total);
	active = activeDay(calories);
	feedback(average);
	displaySummary(calories,total,average,active);
	
	printf("Do You Want To Proceed To Next Week?(1 for Yes, 0 for No): ");
	scanf("%d",&choice);
	i++;
	}while(choice !=0);
	
	printf("Exiting The Program... \n");
	
	return 0;
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

int activeDay(int calories[WEEK])
{
    int max, day =1;
    max = calories[0];
    for(int i=1;i<WEEK;i++)
    {
        if(calories[i]>max)
        {
            max = calories[i];
            day = i+1;
        }
    }
    
    return day;
}

void feedback(float average)
{
    printf("Your Average Is: %.2f\n",average);
    if(average>=750)
    {
        printf("Excellent Progress! \n");
    }
    else if(average>=500)
    {
        printf("Good Effort! \n");
    }
    else
    {
        printf("Needs Improvement! \n");
    }
    
}

void displaySummary(int calories[WEEK], int total, float average, int active)
{
    printf("\n==========Fitness Summary==========\n\n");
    
    printf("%-10s %-10s \n","Day","Calories");
    for(int i=0;i<WEEK;i++)
    {
        printf("%-10d %-10d \n",i+1,calories[i]);
    }
    
    printf("Total Calories: %d\n",total);
    printf("Average Calories: %.2f\n",average);
    printf("Most Active Day: %d\n",active);
}