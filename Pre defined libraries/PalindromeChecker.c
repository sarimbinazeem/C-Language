// A linguistic research team is developing a small tool to study word patterns. They want to check whether a word reads the same forwards and backwards — known as a palindrome. The system should allow a user to enter a word and then report whether the word is a palindrome or not.

// Write a program that takes a word as input, uses a recursive approach to determine if it is a palindrome, and outputs an appropriate message indicating the result.
#include <stdio.h>
#include <string.h>

int palindromeChecker(char word[],int start, int end)
{
	if(start>=end)
	{
		return 1;
	}
	
	if(word[start] != word[end])
	{
		return 0;
	}
	
	return palindromeChecker(word,start+1, end-1);
}

int main()
{
	char word[50];
	
	printf("Enter A Word: ");
	scanf("%s",word);
	
	int lenght = strlen(word);
	
	int isPalin = palindromeChecker(word,0,lenght-1);
	
	if(isPalin)
	{
		printf("%s is a palindrome.\n",word);
	}
	else
	{
		printf("%s is not a palindrome. \n",word);
	}
	
	return 0;
}
