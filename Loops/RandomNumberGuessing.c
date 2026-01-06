//Random Number Guessing Game

//Write a C program that generates a random number between 1 and 100 and asks the user to guess it. 
//Use a do-while loop to give the user multiple chances until they guess the correct number.

#include <stdio.h>

int main()
{
	int number;
	int guess,GuessedNumber,Attempts= 0;
	
	printf("Player 1, Enter any number: (1-100) ");
	scanf("%d", &number);
	
	while (number>100 || number<1)
	{
		printf("Enter valid number! (1-100) ");
		scanf("%d", &number);
	}
	
	do
	{
		printf("Player 2,Guess the number: (1-100) ");
		scanf("%d", &GuessedNumber);
		
		 if(number>GuessedNumber)
		{
			printf("Guessed Too low! Try again.\n");	
		}
		else if (GuessedNumber > number)
        {
            printf("Guessed Too high! Try again.\n");
        }
		Attempts++;
			
	}while(number != GuessedNumber);
	
	 printf(" Correct! You took %d attempts to guess the number %d.\n", Attempts, number);
	
	
	return 0;
}
	