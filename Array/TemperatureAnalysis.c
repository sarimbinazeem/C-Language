//Write a C program that records the temperatures for each day of a week using an array. The program should take temperature input for seven days, store the values, and then analyze them to count how many days were hot (above 30°C) and how many were moderate (30°C or below). Finally, display all recorded temperatures along with a summary showing the number of hot days and moderate days.

#include <stdio.h>
#define WEEK 7

int main()
{
	//Initializing variables
	float temperature[WEEK];
	int hotcount= 0, moderatecount =0 ;
	
	//Loop to enter tempertures
	for (int i = 0; i<WEEK ; i++)
	{
		printf("Enter Temperature for Day %d: ", i+1);
		scanf("%f",&temperature[i]);
		
		//Conditions to count hot and moderate days
		if(temperature[i] > 30)
		{
			hotcount++;
		}
		else if (temperature[i] <=30)
		{
			moderatecount++;
		}
	}
	
	//Printing Temperatures in The Week
	printf("The Temperature for this week is: ");
	for (int i=0; i<WEEK ;i++)
	{
		printf("%.2f ",temperature[i]);
	}
	
	//Final Message
	printf("\n--------------------SUMMARY--------------------\n");
	printf("Number Of Hot Days: %d\n",hotcount);
	printf("Number Of Moderate Days: %d\n",moderatecount);
	
	return 0;
	
}