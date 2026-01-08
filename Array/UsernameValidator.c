//Write a C program that takes a username as input using a character array. The program should ensure that the username contains only alphabetic characters (A–Z, a–z). After accepting a valid username, display it as the accepted username.
#include <stdio.h>
#define MAX 100

int main()
{
	//Variable Initialization
	char username[MAX];
	
	//Taking Input Of Username
	printf("Enter A Username (Only Alphabeths): ");
	scanf("%[A-Za-z]", username);
	
	//Valid Username Printing
	printf("The Accepted Username Is: %s\n",username);
	return 0;
}	