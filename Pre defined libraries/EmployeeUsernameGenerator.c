//A growing company needs a system to generate unique usernames for its employees. Each username is created by taking the first few letters of the employee’s first and last names. If a username has already been assigned to someone else, the system should automatically append a number to make it unique. The HR team wants to be able to enter multiple employees one after another and, at the end, see a list of all generated usernames for record-keeping.

// Write a program that simulates this username generation process, ensuring all usernames are unique and formatted consistently.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LENGTH 50
#define EMPLOYEES 100

//Function prototypes
void toLower(char str[]); //Function to change to lowercase
void generateUsername(char first[],char last[], char User[], char username[][20], int employee); //Function to generate Username

int main()
{
	//Initializing Variables
	char username[EMPLOYEES][20];
	int employee =0,choice;
	
	printf("\n==========Username Generator==========\n\n");
	do
	{
		printf("\n-----Employee %d-----\n",employee+1);
		char first[LENGTH], last[LENGTH], User[LENGTH];
		
		//Taking Necessary Input
		printf("Enter First Name: ");
		scanf("%s",first);
		
		printf("Enter Last Name: ");
		scanf("%s",last);
		
		//Function call
		generateUsername(first,last,User,username,employee);
		
		//Copying Our Generated Username to usernames array
		strcpy(username[employee], User);
		employee++;
		
		printf("Generated Username: %s\n",User);
		
		//proceed case
		printf("Do You Want To Proceed With Next Employee?: (1=Yes 0=No) ");
		scanf("%d",&choice);
	}while(choice != 0);
	
	
	//Display All Username
	printf("\nAll Usernames: \n");
	for(int i=0; i<employee; i++)
	{
		printf("%s\n",username[i]);
	}
	
	return 0;
}

void toLower(char str[])
{
	for(int i=0; str[i] != '\0'; i++)
	{
		str[i] = tolower(str[i]);
	}
}

void generateUsername(char first[],char last[], char User[], char username[][20], int employee)
{
	char base[20];
	//Lowercase both name
	toLower(first);
	toLower(last);
	
	//Copying and Adding first and last name's 3 letter
	strncpy(base,first,3);
	strncat(base,last,3); 
	
	//Null terminator
	base[6] = '\0';
	
	//Copying Base User to Our gENERATED Username
	strcpy(User,base);
	
	//To check if the username already exist or not
	int suffix =1, exist =1;
	
	while(exist)
	{
		exist =0;
		for (int i=0; i<employee; i++)
		{
			//If it already exists
			if(strcmp(username[i],User)==0)
			{
				exist =1;
				//sprintf is used to assign a value to a string
				sprintf(User,"%s%d", base,suffix); //Add number at the end of the name
				suffix++; //If the username is entered for 2nd time it will give 2 
				break;
			}
		}
	}
}