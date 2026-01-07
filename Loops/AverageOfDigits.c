//Average of User Input Numbers

//Write a C program that calculates the average of a set of numbers input by the user. 
//The user should be able to input as many numbers as desired, and the program should continue until the user decides to stop.

#include <stdio.h>

int main()
{
	int count;
	double sum =0.0, number, average;
	
	while (1)
	{
		printf("Input a number (Enter non-numeric number to stop): ");
		if(scanf("%lf",&number) != 1)
		{
			break;
		}
		else
		{
			sum = sum + number;
			count++;
		}
		
	}
	
	if (count >0)
	{
		 average = sum / count;
        printf("Average of input numbers: %.2lf\n", average);
	}
	else {
        
        printf("No numbers were entered.\n");
    }

    return 0;

}