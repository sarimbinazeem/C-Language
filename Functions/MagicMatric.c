// Write a C program that checks whether a given square matrix is a magic matrix using functions. The program should take the order of the matrix (n × n) as input, validate that the size is a positive integer, and allow the user to enter all matrix elements. Using separate functions, display the matrix and determine whether it is a magic matrix by verifying that the sums of all rows, all columns, and both main diagonals are equal. Finally, display an appropriate message indicating whether the given matrix is a magic matrix or not.
#include <stdio.h>

void inputMatrix(int n, int matrix[][n]);
int magicMatrix(int n, int matrix[][n]);
void displayMatrix(int n, int matrix[][n]);

int main() {
    int n, choice;

    do 
	{
        printf("Enter The Order Of The Matrix (nxn): ");
        scanf("%d", &n);
        
        if (n <= 0) 
		{
        printf("Invalid size.\n");
       	break;
   		}

        int matrix[n][n];

        printf("\n========= Magic Matrix Checker =========\n");
        inputMatrix(n, matrix);

        displayMatrix(n, matrix);

        int magicValidation = magicMatrix(n, matrix);

        if (magicValidation)
		{
            printf("Given Matrix Is A Magic Matrix!\n");
        } else 
		{
            printf("Given Matrix Is Not A Magic Matrix!\n");
        }

        printf("Do You Want To Check Another Matrix? (0 = No, 1 = Yes): ");
        scanf("%d", &choice);

    } while (choice != 0);

    return 0;
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

int magicMatrix(int n, int matrix[][n])
{
	int sum = 0,tempsum=0;
	
	//Taking Sum Of One Row For Refrence
	for (int i = 0; i < n; i++) 
	{
 	  	sum += matrix[0][i];
 	}
  	
  	//Checking If All Row Sum Is Same
    for (int i = 1; i < n; i++) 
	{
		tempsum=0;
		for (int j = 0; j < n; j++) 
		{
 	  		tempsum += matrix[i][j];
	
		}
		
		if(tempsum!=sum)
			{
				return 0;
			}
 	}
    
    //Checking If All Column Sum Is Same
    for (int i = 0; i < n; i++) 
	{
		tempsum=0;
		for (int j = 0; j < n; j++) 
		{	
 	  		tempsum += matrix[j][i];
		}
		
		if(tempsum!=sum)
		{
			return 0;
		}
 	}
 	
 	tempsum=0;
 	//Checking If All Diagonal Sum Is Same
    for (int i = 0; i < n; i++) 
	{	
		tempsum += matrix[i][i];
	}
	if(tempsum!=sum)
	{	
		return 0;
	}
    
    tempsum=0;
    for (int i = 0; i < n; i++) 
	{	
		tempsum += matrix[i][n-i-1];

 	}
 	if(tempsum!=sum)
	{	
		return 0;
	}
 	
 	return 1;
}