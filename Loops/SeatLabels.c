//Write a program that takes the total number of rows and the number of seats in each row as input. The program should then print a label for every seat in the auditorium in the format Row X Seat Y, listing all seats row by row.

#include <stdio.h>

int main()
{
	//Initializing Variables 
	int seats,rows;
	
	
	//Taking Input
	printf("Enter Total Number Of Rows: ");
	scanf("%d",&rows);
	
	printf("Enter Total Number Of Seats In Each Rows: ");
	scanf("%d", &seats);
	
	
	//Loop to print rows and seats
	for(int i=1; i<=rows ; i++)
	{
		for(int j=1; j<=seats ; j++)
		{
			printf("Row %d Seat %d\n",i,j);
		}
	}
	
	return 0;
}