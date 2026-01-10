//Write a C program that takes the number of students and the number of subjects as input, validates that both are positive integers, and then records marks (0–100) for each subject of every student using a two-dimensional array. The program should display each student’s marks subject-wise, calculate the total marks, and compute the average marks for each student.

#include <stdio.h>

int main()
{
	//Initiliazing Varibles
	int student,subject,marks;
	
	//Input for students and subjects
	printf("Enter The Number Of Students: ");
	scanf("%d",&student);
	
	while(student <1) //Validation of Input
	{
		printf("Enter Valid Input! (Positive Integers) ");
		scanf("%d",&student);
	}
	
	printf("Enter The Number Of Subjects: ");
	scanf("%d",&subject);
	
	while(subject <1) //Validation
	{
		printf("Enter Valid Input! (Positive Integers) ");
		scanf("%d",&subject);
	}
	
	//Array declaration
	int marksheet[student][subject];
	
	
	//Loop to take input for marks
	for(int i=0; i<student; i++)
	{
		for(int j=0 ; j<subject; j++)
		{
			printf("Student %d: Enter Marks For Subject %d  (0-100) ",i+1,j+1);
			scanf("%d",&marks); 
			
			while(marks>100 || marks<0)
			{
				printf("Enter Valid Input! (0-100) ");
				scanf("%d",&marks);
				
			}
			
			
			marksheet[i][j] = marks;
		}
		
	}
	
	//Average and Sum Of Marks
	for(int i=0; i<student; i++)
	{
		int total=0;
		printf("----------------------Student %d Marksheet ----------------------\n",i+1);
		for(int j=0 ; j<subject; j++)
		{
			printf("Marks Of Subject %d are %d \n",j+1,marksheet[i][j]);
			
			total += marksheet[i][j];
		}
		
		printf("Total Marks: %d\n",total);
		printf("Average Marks: %.2f\n", (float)total/subject);
		
		
		printf("\n");
	}
}