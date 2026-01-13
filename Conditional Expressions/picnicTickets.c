// Write a C program that calculates picnic ticket charges based on the category of the person purchasing the tickets. The program should first ask the user to specify their category as Staff, Faculty, or Student. Based on the selected category, the program should then prompt the user to enter the number of tickets required and apply the appropriate pricing rules. Faculty members should receive up to three tickets free of cost, with any additional tickets charged at a fixed rate per ticket. Staff members should receive up to two free tickets, while extra tickets should incur a higher per-ticket cost. Students should be charged a fixed price for the first ticket, with a different rate applied to each additional ticket. The program must calculate and display the total cost accordingly, grant tickets when applicable, and handle invalid inputs or categories by displaying suitable error messages.

#include <stdio.h>

int main() {
	int tickets, cost, FacultyTickets, StaffTickets;
	char category;

	printf("Who are you? (S = Staff, F = Faculty, T= Students) ");
	scanf(" %c", &category);

	switch(category) {
		case 'F':
			printf("How many tickets do you desire? (No additional fees upto 3 tickets) ");
			scanf("%d", &tickets);

			if (tickets>3) {
				FacultyTickets = tickets - 3;
				cost = FacultyTickets * 1200;
				printf("Your total cost for additonal tickets is: Rs. %d \n", cost );
				printf("Enjoy! \n");
			} else if (tickets<=3 && tickets>=0) {
				printf("Tickets Granted! Enjoy. \n");
			}

			else {
				printf("Enter valid input! \n");
			}
			break;

		case 'S':

			printf("How many tickets do you desire? (No additional fees upto 2 tickets) ");
			scanf("%d", &tickets);

			if (tickets>2) {
				StaffTickets = tickets - 2;
				cost = StaffTickets * 1700;
				printf("Your total cost for additonal tickets is: Rs. %d \n", cost );
				printf("Enjoy! \n");
			} else if (tickets<=2 && tickets>=0) {
				printf("Tickets Granted! Enjoy. \n");
			}

			else {
				printf("Enter valid input! \n");
			}
			break;

		case 'T':
			printf("How many tickets do you desire? ");
			scanf("%d", &tickets);

			if (tickets == 1) {
				cost = 2500;
				printf("Your total cost for the ticket is: Rs. %d \n", cost );
				printf("Enjoy! \n");
			} else if (tickets>1) {
				cost = 2500 + ((tickets-1) * 2600);
				printf("Your total cost for the tickets is: Rs. %d \n", cost );
				printf("Enjoy! \n");
			}

			else {
				printf("Enter valid input! \n");
			}
			break;

		default:
			printf("Invalid Category! \n");
	}

	return 0;


}