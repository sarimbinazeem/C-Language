//Write a C program to calculate the library book return fine based on the number of days a book is returned late. The program should first ensure that the user enters a non-negative number of late days by repeatedly prompting until valid input is provided. Once a valid number is entered, use a loop to calculate the fine for each day, where the fine increases progressively with each passing day. Display the fine for each day along with the cumulative total so far. Finally, if the book is returned on time, display an appropriate message; otherwise, show the total fine to be paid. Use loops and conditional statements to implement the logic.
#include <stdio.h>

int main()
{
	//Initializing Variables for days
    int DaysLate, fine = 0;
	int dayFine;

    // Taking Valid Input by Looping
	do
	{
		printf("What is the number of days the book was returned late? : ");
   		scanf("%d", &DaysLate);
	}
	while (DaysLate < 0);
    
    // Loop for calculating fine
    for (int Day = 1; Day <= DaysLate; Day++)
    {
        dayFine = Day * 5;     // fine increases by 5 * day number
        fine = fine + dayFine;     
        printf("Day %d fine = Rs. %d .\n Total so far = Rs. %d\n", Day, dayFine, fine);
    }

    // Final Fine
	if (DaysLate == 0) //0 late days
    {
        printf("Book returned on time. No fine.\n");
    }
	else
	{
    	printf("\nTotal Fine to be paid = Rs. %d\n", fine);
	}

    return 0;
}