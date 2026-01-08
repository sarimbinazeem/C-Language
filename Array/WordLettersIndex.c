// //Write a C program that asks the user to enter a word containing only alphabetic characters.
// The program should validate the input to ensure no non-alphabetic characters are entered.
// After accepting a valid word, calculate its length and display each character of the word along with its corresponding index position.

#include <stdio.h>
#define MAX 100

int main()
{
	//Initializing Variables
	char word[MAX];
	int wordcount=0;
	
	//Input The Word
	printf("Enter A Word (alphabets only): ");
	//Invalid CASE 
	if (scanf("%[A-Za-z]", word) != 1)
		{
  		  printf("Invalid input! Please enter alphabets only.\n");
  		  return 1;
		}
	
	//Counting The Word Length
	while(word[wordcount] != '\0')
	{
		wordcount++;
	}
	
	//Printing each character with its index
	for(int i=0; i<wordcount;i++)
	{
		printf("%c at %d \n",word[i], i);
	
	}
	
	return 0;
}