//Write a C program named Employee Salary Analyzer by Gender that collects and analyzes salary data for a group of employees using loops and conditional logic. The program should first ensure that the number of employees entered is at least 10. For each employee, it should take the gender and salary as input, then keep track of the total salary and count separately for males and females. After processing all employees, the program should calculate and display the average salary for male employees and female employees individually, while also handling cases where no valid data for a particular gender is entered.
#include <stdio.h>

int main()
{
	char gender;
	int n,male_count=0, female_count =0;
	float salary, male_total = 0 , female_total = 0;
	
	
	do
	{
		printf("Enter number of employees: ");
		scanf("%d", &n);
	} while (n<10);
	
	for(int i = 1; i<=n ; i++)
	{
		printf("Entert Gender (M for male and F for female) ");
		scanf(" %c", &gender);
		
		printf("Enter salary: ");
		scanf("%f", &salary);
		
		switch (gender)
		{
			case 'M':
			case 'm':
				male_total += salary;
				male_count++;
				break;
				
			case 'F':
			case 'f':
				female_total += salary;
				female_count++;
				break;
			
			default:
				printf("Invalid Input! \n");
				break;
		}
	}
	if (male_count>0)
	{
		printf("Average Salary of %d Males is: %.2f \n",male_count, male_total/male_count);
	}
	else
	{
		printf("No Male Data Entered: \n");
	}
	
	 if (female_count>0)
	{
		printf("Average Salary of %d Females is: %.2f \n",female_count, female_total/female_count);
	}
	else
	{
		printf("No Female Data Entered: \n");
	}
	return 0;
}
	
	
		