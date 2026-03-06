// A small content management team wants a simple system to store multiple lines of text. Sometimes, they need to replace a specific line with a new one without losing the rest of the text.

// Write a program that allows the user to:

// Enter a set of lines to save.

// Choose a line number and provide a new line to replace it.

// Display all the lines after the replacemen

#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	printf("How Many Lines You Want to Save: ");
	scanf("%d",&n);
	
	char lines[n][100];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter Line %d: ",i+1);
		scanf(" %[^\n]",lines[i]);
	}
	
	char line[100];
	int index;
	printf("Enter Line You Want To Replace: ");
	scanf(" %[^\n]",line);
	
	printf("How Line Number You Want to Replace: ");
	scanf("%d",&index);
	
	strcpy(lines[index-1],line);
	
	printf("Lines: \n");
	for(int i=0;i<n;i++)
	{
		printf("%s \n",lines[i]);
	}
}