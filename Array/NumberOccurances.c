
//Write a C program that conducts a survey of students’ favorite numbers.
// The program should allow a fixed number of students to enter their favorite number within a given range, store these values in an array, and count how many times each number occurs.
// Finally, the program should display all the entered numbers and determine which number was chosen the most, along with its frequency.

#include <stdio.h>
#define students 10
int main()
{
	//Initializing Variables For Numbers And Occurences
	int numbers[students], count[10]={0}, Common=0,Maximum=0;
	
	//Taking Input For The Numbers	
	for (int i = 0; i<10 ; i++)
	{
		printf("Student %d, Enter Your Favourite Number (1-10): ",i+1);
		scanf("%d",&numbers[i]);
		
		while (numbers[i]<1 || numbers[i]>10)
		{
			printf("Enter Valid Number! (1-10) ");
			scanf("%d",&numbers[i]);
		}
		
		count[numbers[i] - 1]++; //Increases the number occurances on that spot 
		
	}
	
	//Assigning Maximum Numnber And Most Common number
	for(int i=0; i<10 ; i++)
	{
		if(count[i]> Maximum)
		{
			Maximum = count[i];
			Common = i + 1;
		}
	}
	
	//Displaying All The Numbers
	printf("The Number Picked Are: ");
	for(int i=0; i<10 ; i++)
	{
		printf("%d ", numbers[i]);
	}
	
	//Final Message Portraying Maximum And Common Number
	printf("\n--------------------SUMMARY--------------------\n");
    printf("Highest Occurrence: %d times\n", Maximum);
    printf("Most Common Number: %d\n", Common);
	
	return 0;
}