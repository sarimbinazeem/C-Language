//Write a C program that simulates arranging books in a library using a two-dimensional array. The program should take the number of shelves and the number of books per shelf as input, validate that both are positive values, and then allow the user to enter a unique ID for each book on every shelf. Finally, display the complete library arrangement in a tabular format showing shelves and their corresponding book IDs.
#include <stdio.h>

int main() 
{
	//Initializing Variables
    int shelves, books;
    
    //Welcome message
    printf("----------------Library Shelf Arrangment----------------\n\n");
    
    //Taking Input
    printf("Enter number of shelves: ");
    scanf("%d", &shelves);
    while (shelves < 1) //Input Validation
	{
    	printf("Invalid input! Enter a positive number: ");
        scanf("%d", &shelves);
    }

    printf("Enter number of books per shelf: ");
    scanf("%d", &books);
    while (books < 1) //Input Validation
	{
        printf("Invalid input! Enter a positive number: ");
        scanf("%d", &books);
	}

	//Declaring Array
    int id[shelves][books];

	//Taking Input For Array
    for (int i = 0; i < shelves; i++) {
        printf("\n----------------Shelf %d----------------\n\n",i+1);
        for (int j = 0; j < books; j++) {
            printf("Enter ID for Book %d: ",j+1);
            scanf("%d", &id[i][j]);
        }
    }
    
    //Final Summary
    printf("\n----------------Library----------------\n\n");
    
    printf("\t");
    
    for(int j=0; j<books; j++)
    {
    	printf("\tBook %d",j+1);
	}
    
    //Book ID Printing
    for (int i = 0; i < shelves; i++) {
        printf("\nShelf %d:", i + 1);
        for (int j = 0; j < books; j++) {
            printf("\t%d", id[i][j]);
        }
        printf("\n");
    }
    return 0;
}