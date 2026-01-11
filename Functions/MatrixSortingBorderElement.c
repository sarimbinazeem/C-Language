// Write a C program that sorts the border elements of a two-dimensional matrix using functions. The program should take the number of rows and columns as input (ensuring both are at least 2), and allow the user to fill the matrix with integer elements. After displaying the original matrix, the program should ask the user if they want to sort the border elements. If yes, sort only the elements on the outer border of the matrix in ascending order while leaving the inner elements unchanged, and then display the updated matrix. Finally, allow the user to repeat the process for another matrix or exit.

// Key Requirements:

// Validate the input for rows and columns (minimum size 2×2).

// Use functions for:

// Inputting matrix elements

// Displaying the matrix

// Sorting border elements

// Ensure only the border elements are sorted; inner elements must remain the same.

// Allow multiple iterations until the user chooses to exit.
#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void displayMatrix(int rows, int cols, int matrix[rows][cols]);
void sortMatrix(int rows, int cols, int matrix[rows][cols]);
void sort(int bordercount, int border[]);

int main()
{
    int rows, cols, sort, choice;

    do
    {
        printf("\n========== Matrix Border Element Sorting ==========\n");

        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);

        while (rows < 2 || cols < 2)
        {
            printf("Invalid size. (Should be at least 2x2)\n");
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printf("Enter number of columns: ");
            scanf("%d", &cols);
        }

        int matrix[rows][cols];

        inputMatrix(rows, cols, matrix);

        printf("The Original Matrix Is:\n");
        displayMatrix(rows, cols, matrix);

        printf("Do You Want To Sort The Border Elements? (1=YES, 0=NO): ");
        scanf("%d", &sort);

        switch (sort)
        {
        case 0:
            printf("Skipping...\n");
            break;

        case 1:
            printf("Proceeding...\n");
            sortMatrix(rows,cols,matrix);
            printf("The Updated Matrix Is:\n");
            displayMatrix(rows, cols, matrix);
            break;

        default:
            printf("Invalid Input!\n");
            break;
        }

        printf("Do You Want To Proceed With Another Matrix? (1=YES, 0=NO): ");
        scanf("%d", &choice);

    } while (choice != 0);
}

void inputMatrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int number;
            printf("Enter Element: ");
            scanf("%d", &number);
            matrix[i][j] = number;
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}

void sortMatrix(int rows, int cols, int matrix[rows][cols])
{
    int bordercount= 2*(rows + cols -2);
    int border[bordercount];
    int index;
    
    //Top Row
    for(int j=0; j<cols; j++)
    {
    	border[index++] = matrix[0][j];
	}
	
	//Right Column (Excluding Corners)
	for(int i=1; i<rows-1; i++)
	{
		border[index++] = matrix[i][cols-1];
	}
	
	//Bottom Row
	for(int j=cols-1; j>=0; j--)
	{
		border[index++] = matrix[rows-1][j];
	}
	
	//Left Column (Excluding Corners)
	for(int i=rows-2; i>0; i--)
	{
		border[index++] = matrix[i][0];
	}
	
	//Sort
	sort(bordercount,border);
	
	index=0;
	//Top Row
	for(int j=0;j<cols-1;j++)
	{
		matrix[0][j] = border[index++];
	}
	
	//Right Column
	for(int i=1;i<rows-1;i++)
	{
		matrix[i][cols-1] = border[index++];
	}
	
	//Left Column
	for(int i=rows-2; i>0; i--)
	{
		matrix[i][0] = border[index++];
	}
	
	//Bottom Row
	for(int j=cols-1; j>=0; j--)
	{
		matrix[rows-1][j] = border[index++];
	}
}

void sort(int bordercount, int border[])
{
	for(int i=0 ; i<bordercount-1; i++)
	{
		if(border[i]>border[i+1])
		{
			int temp;
			temp = border[i];
			border[i] = border[i+1];
			border[i+1] = temp;
		}
	}
}