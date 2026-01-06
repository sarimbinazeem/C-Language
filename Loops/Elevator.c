//Write a C program that simulates an elevator floor navigation system. The program should ask the user to enter the floor number they want to reach and first verify whether the entered floor is within a valid range. If the floor number is invalid, an error message should be displayed and the program should stop. If the input is valid, use a loop to display each floor the elevator passes through starting from the ground floor until it reaches the selected destination. Once the destination floor is reached, display a final message indicating successful arrival.

#include <stdio.h>

int main()
{
	//Initializing variable for floor
	int floor;
	
	//Taking Input as floor
	printf("Enter which floor you want to reach?:  ");
	scanf("%d", &floor);
	
	//Condition to check for valid floor number
	if(floor<0 || floor> 50)
		{
			printf("Error! Enter valid floor number. \n");
			return 0;
		}
		
	//Loop to print every floor	
	for (int i =0; i<=floor; i++ )
	{
			printf("You have reached floor: %d \n", i);	
	}
	
	//Final Message
	printf("You have arrived at your destination! \n");
	return 0;
}