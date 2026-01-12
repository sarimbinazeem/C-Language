//Write a C program that simulates a ticket issuing system for a service counter. The program should allow the user to issue tickets one by one and display the ticket number each time a ticket is issued. Use a user-defined function named issue to handle the ticket issuing. Inside the function, maintain a static variable to keep track of the ticket number so that it increments automatically with each call, starting from 1. In the main function, implement a menu that repeatedly prompts the user to either issue a ticket or exit the program. When the user chooses to issue a ticket, call the issue function and display the issued ticket number. This exercise demonstrates the use of static variables to preserve state across multiple function calls and basic menu-driven program design in C.

#include <stdio.h>


void issue()
{
    static int ticket = 0;   
    ticket++;               
    printf("Ticket Issued: %d\n", ticket);
}

int main()
{
	int choice;
	
	do
	{
		printf("\n==========Ticket Issuing System=========\n");
		printf("1.Issue Ticket\n");
		printf("0.Exit\n");
		
		scanf("%d",&choice);
		
		if(choice ==1)
		{
			issue();
		}
	}while(choice!=0);
}