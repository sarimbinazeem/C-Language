#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Function prototypes
void changeVowel(char encrypted[],int beforeLen); //Function to change Vowels to next alphabeth
void changeOrder(char words[][50], char result[],char encrypted[]); //Function to change the order of the words
int checkVowel(char ch); //Function to check vowels

int main()
{
	//Initializing Variables
	int beforeLen,afterLen;
	char message[100],encrypted[100], result[100] = "";
	char words[50][50];
	
	//Entering THe Message
	printf("Enter The Message: ");
	scanf("%[^\n]",message);
	
	//Taking Length before encryption
	beforeLen = strlen(message);
	
	//Copying Message to Encrypted
	strcpy(encrypted,message);
	
	//Changing Vowel
	changeVowel(encrypted,beforeLen);
	
	//Changing Order
	changeOrder(words,result,encrypted);
	
	//TAKING lenght After Encryption
	afterLen = strlen(result);
	
	//Final Summary
	printf("\n========Summary========\n");
	printf("Encrypted Sentence: %s\n",result);
	printf("Characters Before Encryption: %d\n",beforeLen);
	printf("Characters After Encryption: %d\n",afterLen);
	
	return 0;
}

int checkVowel(char ch)
{
	//Making Character in LowerCASE
    ch = tolower(ch);
    
    switch(ch)
    {
        case'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
            break;
            
        default:
             return 0;
             break;
    }
}
void changeVowel(char encrypted[],int beforeLen)
{
    for(int i=0;i<beforeLen;i++)
    {
        if(checkVowel(encrypted[i]))
        {
            encrypted[i] = encrypted[i] + 1; //Changing the alphabeth to its next alphabeth
        }
    }
    
}

void changeOrder(char words[][50], char result[],char encrypted[])
{
	
    int wordCount=0;
    //Getting Word by word
    char *tok = strtok(encrypted," ");
    while(tok!= NULL)
    { 
 	   //Putting Token to words array
        strcpy(words[wordCount],tok);
        wordCount++;
        
        //Moving towards next word
        tok = strtok(NULL, " "); // to proceed to next word
    }
    
    for(int i =wordCount-1; i>=0;i--)
    {
    	//Adding words to result array
        strcat(result,words[i]);
        
        if(i!=0) //For whitespaces
        {
            strcat(result," ");
		}
	}
}