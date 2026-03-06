// A software development team is building a text analysis tool for a data entry department. They want to understand the composition of user-inputted strings by counting how many letters, digits, and special characters are present. Spaces and newlines should not be counted as special characters.

// Write a program that allows a user to enter a string and then outputs the total number of alphabets, digits, and special characters in that string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int alphabets=0,digits=0,special=0;
	char str[100];
	
	printf("Enter A String: ");
	scanf("%[^\n]",str);
	
	for(int i=0; str[i] != '\0'; i++)
	{
	
		
			if(isalpha(str[i]))
			{
				alphabets++;
			}
    	    else if (isdigit(str[i])) 
			{
           		 digits++;
      		  }
     	   else if (!isspace(str[i]) && str[i] != '\n') 
			{
      	      // Not a space or newline which means it is a special character
          	  special++;
      		  }
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special);

    return 0;
}
