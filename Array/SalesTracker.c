//Write a C program that tracks sales in a retail store using a three-dimensional array. The program should take the number of branches and the number of weeks as input (validate that both are positive values) and then allow the user to enter weekly sales for each product at every branch. Finally, calculate and display the total sales for each product across all branches and weeks.

#include <stdio.h>
#define products 2

int main()
{
	//Initializing Variables
	int branches, weeks;
	
	//Welcome Message	
	printf("--------------------Retail Store Sales Tracker--------------------\n\n");
	
	//Taking Inputs
	printf("Enter number of branches: ");
    scanf("%d", &branches);
    while (branches < 1)  //Input Validation
	{
        printf("Invalid input! Enter a positive number: ");
        scanf("%d", &branches);
    }

    printf("Enter number of weeks to calculate sales: ");
    scanf("%d", &weeks);
    while (weeks < 1) //Input Validation
	{
        printf("Invalid input! Enter a positive number: ");
        scanf("%d", &weeks);
    }
	
	//Declaring Array
	int sales[products][branches][weeks];
	
	//Taking input By Nested Looping
	for (int i=0; i<products; i++)
	{
		printf("\n\n--------------------Product %d--------------------\n\n",i+1);
		
		for(int j=0; j<branches; j++)
		{
			printf("\n---------------Branch %d---------------\n\n",j+1);
			for(int k=0; k<weeks; k++)
			{
				printf("Enter Sales For Week %d: ",k+1);
				scanf("%d",&sales[i][j][k]);
				
			}
		}
	
	}	
	
	//Final Summary
	printf("\n\n--------------------Total Sales--------------------\n\n");
	
	//Taking Sum by looping 
	for (int i=0; i<products; i++)
	{
		int sale=0;
		printf("\n--------------------Product %d--------------------\n\n",i+1);
		for(int j=0; j<branches; j++)
		{
			for(int k=0; k<weeks; k++)
			{
				sale += sales[i][j][k];
				
			}
		}
		
		printf("Total Sales For Product %d: %d\n",i+1, sale);
	}	
	
	return 0;
}