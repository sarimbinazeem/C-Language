//Write a C program that generates the mirror image of a matrix using functions and two-dimensional arrays. The program should take the number of rows and columns of the matrix as input, ensuring that both values form a valid matrix size. It should allow the user to enter all elements of the matrix through an input function and then display the original matrix. The program should ask the user whether they want to view the mirror image of the matrix; if yes, it should display the horizontally mirrored version of the matrix using a separate function. Finally, the program should allow the user to repeat the process for another matrix or exit.
#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void displayMatrix(int rows, int cols, int matrix[rows][cols]);
void mirrorMatrix(int rows, int cols, int matrix[rows][cols]);

int main()
{
    int rows, cols, mirror, choice;

    do
    {
        printf("\n==========Matrix Mirror Image==========\n");

        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);

        while (rows < 0 || cols < 0)
        {
            printf("Invalid size. (Should be atleast 2x2)\n");
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printf("Enter number of columns: ");
            scanf("%d", &cols);
        }

        int matrix[rows][cols];

        inputMatrix(rows, cols, matrix);

        printf("The Original Matrix Is:\n");
        displayMatrix(rows, cols, matrix);

        printf("Do You Want To See The Mirror Image(1=YES, 0=No): ");
        scanf("%d", &mirror);

        switch (mirror)
        {
        case 0:
            printf("Skipping...\n");
            break;

        case 1:
            printf("Proceeding...\n");
            printf("The Updated Matrix Is:\n");
            mirrorMatrix(rows,cols,matrix);
            break;

        default:
            printf("Invalid Input! \n");
            break;
        }

        printf("Do You Want To Proceed With Another Matrix?: (1=YES 0=NO) ");
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

void mirrorMatrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = cols - 1; j >= 0; j--)
        {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}











