//Write a C program that manages hospital temperature records using a three-dimensional array. The program should take the number of patients in each ward as input (validate that it is a positive value) and record their body temperatures three times a day (morning, afternoon, and evening) for multiple wards. Finally, calculate and display the average temperature for each ward based on all patients and recorded times.

#include <stdio.h>
#define times 3
#define wards 2

int main()
{
	//Initializing Varaibles
	int patients;

	//Welcome Message
	printf("--------------------Hospital Temperature Records--------------------\n\n");
	
	//Taking Inputs
	printf("Enter Number Of Patients In Each Ward: ");
	scanf("%d",&patients);

	//Input Validation
	while (patients < 1) 
	{
		printf("Invalid input! Enter a positive number: ");
		scanf("%d", &patients);
	}
	float temperature[wards][patients][times];
	
	//Taking Input By Array
	for (int i = 0; i < wards; i++) 
	{
		 printf("--------------------Ward %d--------------------\n\n",i+1);
		 for (int j = 0; j < patients; j++) 
		 {	
			printf("\n--- Patient %d ---\n", j + 1);
			
			printf("Enter Morning Temperature: ");
			scanf("%f", &temperature[i][j][0]);
			
			printf("Enter Afternoon Temperature: ");
			scanf("%f", &temperature[i][j][1]);

			printf("Enter Evening Temperature: ");
			scanf("%f", &temperature[i][j][2]);
        	printf("\n");
        }
    }

	//Final Summary
	printf("--------------------Average Temperature--------------------\n\n");

	//Taking Sum By Nested Looping
	for(int i=0; i<wards; i++)
	{

		printf("--------------------Ward %d--------------------\n\n",i+1);
		float sum=0;
		for(int j=0 ; j<patients ; j++)
		{
			for(int k=0; k<times ;k++)
			{
				sum += temperature[i][j][k];
			}

		}

	printf("Average Temperature: %.2f\n",sum/(patients*times));
	}

	return 0;
}