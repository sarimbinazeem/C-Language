//Write a C program that uses an array to record a trainee’s attendance for 7 days of a week, where 1 represents present and 0 represents absent. The program should validate the input to ensure only 0 or 1 is entered. It should then display the attendance record for the week and evaluate the trainee’s attendance consistency as Excellent, Average, or Needs Improvement based on the total number of days present.

#include <stdio.h>
#define WEEK 7

int main()
{
	int attendance[WEEK],present=0;
	
	for(int i=0 ; i<WEEK ; i++)
	{
		printf("Day%d: Trainee is present(1) or absent(0)? ",i+1);
		scanf("%d", &attendance[i]);
		
		while (attendance[i] != 0 && attendance[i] != 1)
		{
               printf("Invalid input! Please enter 1 for present or 0 for absent.\n");
                printf("Day%d: Trainee is present(1) or absent(0)? ",i+1);
                scanf("%d", &attendance[i]);
            
		}
		
		
		if(attendance[i] ==1)
		{
			present++;
		}
	}
	
	printf("The Attendance For This Week is:  ");
	for (int i=0; i<WEEK ;i++)
	{
		printf("%d ",attendance[i]);
	}
	
	if(present >=6)
	{
		printf("\nExcellent Attendance! \n");
	}
	else if(present>=3)
	{
		printf("\nAverage Attendance! \n");
	}
	else 
	{
		printf("\nNeeds Improvement In Attendance! \n");
	}
	
	return 0;
}
