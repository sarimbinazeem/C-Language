//Write a C program that generates a strong password for a user based on their personal details. The program should:

// Take the following input from the user:

// Name

// Gender

// Contact number

// Ask the user for password requirements:

// Minimum password length

// Minimum number of digits

// Minimum number of special characters

// Generate a password that satisfies the following rules:

// Starts with the first two letters of the user’s name.

// Includes the last two digits of the contact number.

// Contains the specified number of random digits.

// Contains the specified number of random special characters (#, $, %, &, @, !, *, +, -, ?).

// Fills the remaining length with random uppercase and lowercase letters.

// Display the generated password.

// The program should demonstrate the use of arrays, strings, random number generation, loops, and user-defined functions. Ensure proper input validation where necessary.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> 
#define LENGTH 100

void userDetails(char name[], char gender[], char contact[]) ;
void passwordGenerator(char name[],char contact[],int Lenght,int  Digits,int  Special,char password[]);


int main()
{
	char name[LENGTH], gender[10], contact[20];
	int Length, Digits, Special;
	char password[LENGTH];
	
	srand(time(0));
	
	userDetails(name,gender,contact);
	
	printf("Enter Password Minimum Lenght: ");
	scanf("%d",&Length);
	
	printf("Enter Minimum Number Of Digits: ");
	scanf("%d",&Digits);
	
	printf("Enter Minimum Number Of Special Characters: ");
	scanf("%d",&Special);
	
	passwordGenerator(name,contact,Length, Digits, Special,password);
	
	printf("Generated Password: %s\n",password);
	
	return 0;
}

void userDetails(char name[], char gender[], char contact[]) 
{
    printf("Enter your name: ");
    scanf(" %[^\n]s", name);
    
    printf("Enter your gender: ");
    scanf("%s", gender);
    
    printf("Enter your contact number: ");
    scanf("%s", contact);
}

void passwordGenerator(char name[],char contact[],int Lenght,int  Digits,int  Special,char password[])
{
	char specials[] = {'#', '$', '%', '&', '@', '!', '*', '+', '-', '?'};
	int lenghtName = strlen(name);
	int lenghtContact = strlen(contact);
	int i=0;
	
	//First Two Letter Of Name
	password[i++] = name[0];
	if (lenghtName >1)
	{
		password[i++] = name[1];
	}
	
	//Last Two Letter Of Contact
	 if (lenghtContact >= 2) {
        password[i++] = contact[lenghtContact - 2];
        password[i++] = contact[lenghtContact - 1];
    } else {
        password[i++] = contact[0];
    }
    
    //Random Digit
    for(int j=0 ; j<Digits; j++)
    {
    	password[i++] = '0' + (rand() %10);
	}
	
 	//  random special characters
    for (int j = 0; j < Special; j++) {
        password[i++] = specials[rand() % 10];
    }

    //remaining length with random letters
    while (i < Lenght) {
        char letter;
        if (rand() % 2) 
        {
        	letter = 'A' + (rand() % 26); //A (in ascii form) + Random Integer
		}
	
        else 
		{
			letter = 'a' + (rand() % 26);
		}
        password[i++] = letter;
    }

    password[i] = '\0'; // Null-terminate
}