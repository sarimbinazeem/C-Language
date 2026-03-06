// A publishing company wants to create a simple tool for authors to quickly check how many words are in a given sentence or paragraph. The system should allow a user to enter a string of text and then report the total number of words it contains.

// Write a program that reads a line of text from the user, counts the number of words, and displays the result.

#include <Stdio.h>
#include <string.h>

 
int main()
{
	char str[100];
	int count=0;
	char *token;
	
	printf("Enter A String: ");
	scanf("%[^\n]",str);
	
	token = strtok(str, " ");

	while(token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}
	
	printf("Total Number of Words: %d",count);
	
return 0;

}
