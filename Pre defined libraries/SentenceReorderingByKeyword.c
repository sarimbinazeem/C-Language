// A research team is working on text processing for survey responses. They want to reorder a set of sentences based on the presence of certain keywords like “one”, “two”, and “three”. Sentences containing “one” should appear first, followed by those containing “two”, then “three”, and finally any sentences that don’t contain any of these keywords.

// Write a program that takes a list of sentences, arranges them in this order, and displays the reordered sentences.

#include <stdio.h>
#include <string.h>

void saveInOrder(char *txt[], char arranged[][100])
{
	int index=0;
	
	for(int i=0 ; i<6; i++)
	{
		if(strstr(txt[i],"one") != NULL)
		{
			strcpy(arranged[index++],txt[i]);
		}
	}
	
	for(int i=0 ; i<6; i++)
	{
	
		if(strstr(txt[i],"two") != NULL)
		{
			strcpy(arranged[index++],txt[i]);
		}
	}
	
	for(int i=0 ; i<6; i++)
	{
	
		if(strstr(txt[i],"three") != NULL)
		{
			strcpy(arranged[index++],txt[i]);
		}
	}

	for(int i=0 ; i<6; i++)
	{
	
		if((strstr(txt[i],"three") == NULL) && (strstr(txt[i],"two") == NULL) && (strstr(txt[i],"one") == NULL))
		{
			strcpy(arranged[index++],txt[i]);
		}
	}
	
	
}

int main() 
{
    char *txt[] = {
        "this sentence contains two",
        "one is so easy",
        "what is two",
        "this cannot be three",
        "why is this not three",
        "no numbers here"
    };
    
    char arranged[6][100];
    
    saveInOrder(txt,arranged);
    
    printf("Textr In Arranged OrdeR: \n");
    for(int i=0; i<6; i++)
    {
    	printf("%s\n",arranged[i]);
	}
}