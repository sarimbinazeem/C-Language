// PICNIC TICKETS

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