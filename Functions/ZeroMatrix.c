//Write a C program that converts a square matrix into a zero matrix using functions. The program should take the order of the matrix (n × n) as input, ensuring that the size is a positive integer. It should allow the user to enter all elements of the matrix using a dedicated input function and display the original matrix. Then, using a separate function, convert the matrix into a zero matrix by setting all its elements to zero. Finally, display the resulting zero matrix in a proper matrix format.
#include <stdio.h>

void inputMatrix(int n, int matrix[][n]);
int zeroMatrix(int n, int matrix[][n]);
void displayMatrix(int n, int matrix[][n]);

int main()
{
	int n,choice;
	
	do
	{
		printf("\n==========Zero Matrix Maker==========\n\n");
		
		printf("Enter The Size Of Matrix (nxn): ");
		scanf("%d",&n);
		
		int matrix[n][n];
		
	}
}


void inputMatrix(int n, int matrix[][n]) 
{
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            int number;
            printf("Enter Element: ");
            scanf("%d", &number);
            matrix[i][j] = number;
        } 
    }
}

void displayMatrix(int n, int matrix[][n]) 
{
    printf("The Matrix Is:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}
 