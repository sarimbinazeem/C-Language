// A social media company wants to analyze conversations in chat groups to track trending topics. Words that begin with # or @ are considered important, and the system should collect these keywords while ignoring duplicates. Analysts want to see a list of unique keywords and know how many unique keywords appeared across multiple chat messages.

// Write a program that reads several chat lines from the user and identifies all the unique hashtags and mentions.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//FUnction Prototype For DUplication function
int isDuplicate(char token[], char tags[][50], int tagCount);

int main()
{
	//Initializing Variables
	char message[200] , tags[50][50];
	int tagCount =0,number;
	
	//Taking THe number of chat lines 
	printf("Enter The Number Of Chat Lines: ");
	scanf("%d",&number);
	getchar(); //To get newline
	
	//Performing operation line by line
	for(int i=0; i<number; i++)
	{
		//Input for lIne
    	printf("Enter line %d: ", i+1);
    	fgets(message, sizeof(message), stdin);
    	
    	//Breaking Each Word of the line in each token
		char *token = strtok(message," ");
    	while(token != NULL) //Looping Until The Word Ends
    	{
    		if(token[0] == '#' || token[0] == '@') //Checking if each word has # or @ at start of the word
    		{
    			token[strcspn(token, "\n")] = 0; //To REMOVE newline
    			if(!isDuplicate(token,tags,tagCount)) //Check if its duplicate
    			{
    				//Copy the word to important keywords array
    				strcpy(tags[tagCount],token);
    				tagCount++;
				}
			}
			
			token = strtok(NULL, " "); //Move towards next word
			} 
		
	}
	
	//Final SUmmary of keywords
	printf("\n==========Keywords==========\n");
	for(int i=0; i<tagCount ;i++)
	{
		printf("%s\n",tags[i]);
	}
	printf("\nTotal Keywords: %d\n",tagCount);
	
	return 0;
}

int isDuplicate(char token[], char tags[][50], int tagCount)
{
	for(int i=0; i<tagCount; i++)
	{
		if(strcmp(token,tags[i])==0) //strcmp returns 0 if word matches with existing tag
		{
			return 1;
		}
	}
	
	return 0;
}