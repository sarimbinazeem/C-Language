// Write a C program that simulates a customizable Connect-N game using a two-dimensional array. The program should:

// Prompt the user to enter the number of rows and columns for the game board (both must be positive).

// Ask the user to enter the “connecting length” (N), i.e., the number of discs in a row required to win, ensuring it is at least 2 and does not exceed the board dimensions.

// Initialize an empty game board and display it.

// Alternate turns between the human player (R) and the computer (Y):

// The player chooses a column to drop their disc.

// The computer randomly selects a column to drop its disc.

// Ensure that discs stack from the bottom and columns cannot overflow.

// After each move, display the updated board.

// Check for a winner after every turn, considering horizontal, vertical, and diagonal connections. Declare the winner when the connecting length is achieved.

// Detect a draw if the board is full without any winner.

// Repeat the game loop until there is a winner or a draw.

// Key Requirements:

// Use functions to:

// Initialize the board

// Display the board

// Drop discs for the player and computer

// Check for winning conditions and draws

// Ensure input validation for rows, columns, connecting length, and column selection.

// Allow flexible board sizes and winning lengths for replayability.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max(int a, int b);
void initializeboard(int rows, int cols, char grid[][cols]);
int RdropDisc(int rows, int cols, int col, char grid[][cols]);
int YdropDisc(int rows, int cols, int col, char grid[][cols]);
void display(int rows, int cols, char grid[][cols]);
int CheckWin(int rows,int cols,char grid[][cols],int connect);
int checkDraw(int rows, int cols,char grid[][cols]);

int main()
{
	int rows,cols,length,validmove,col ;
	
	printf("Enter Number Of Rows: ");
	scanf("%d",&rows);
	
	printf("Enter Number Of Columns: ");
	scanf("%d",&cols);
	
	srand(time(0));
	
	while(rows<0 || cols<0)
	{
		printf("Invalid Input! Enter Positive. \n");
		
		printf("Enter Number Of Rows: ");
		scanf("%d",&rows);
	
		printf("Enter Number Of Columns: ");
		scanf("%d",&cols);
	}
	
	int maximum = max(rows,cols);
	
	printf("Enter Connecting Length (2-%d) : ",maximum);
	scanf("%d",&length);
	
	while(length>rows ||length>cols || length<2)
	{
		printf("Enter Valid input! (2-%d)\n",maximum);
		printf("Enter Connecting Length (2-%d) : ",maximum);
		scanf("%d",&length);
	}
	
	printf("\n\n========== Connect %d Game ==========\n",length);
	char grid[rows][cols];
	initializeboard(rows,cols,grid);
	
	while(1)
	{
		do
		{
			printf("\n Player R Turn. \n");
			printf("Enter Column Number (0-%d) ",cols-1);
			scanf("%d",&col);
			
			if(col<0 || col>=cols)
			{
				printf("Invalid Column! Enter Again");
				validmove = 0;
			}
			else
			{
				validmove = RdropDisc(rows,cols,col,grid);
				
				if(!validmove)
				{
					printf("Column Full! \n");
				}
			}
		}while(!validmove);
		
		display(rows,cols,grid);
		
		char winner;

		winner = CheckWin(rows, cols, grid, length);
		if (winner == 'R') 
		{
   			 printf("Player R Wins!\n");
    		break;
		}		
		 else if (winner == 'Y') 
		 {
    		printf("Computer (Y) Wins!\n");
    		break;
		}
		
		if(checkDraw(rows,cols,grid))
		{
			printf("Its A Draw! \n");
			break;
		}
		
		do
		{
			printf("\n Computer Y Turn. \n");
			printf("Computer Choosing Column Number...\n");
			
			col = rand() % cols;
			validmove = YdropDisc(rows,cols,col,grid);

		}while(!validmove);
		
		display(rows,cols,grid);
		
		winner = CheckWin(rows, cols, grid, length);
		if (winner == 'R') 
		{
   			 printf("Player R Wins!\n");
    		break;
		}		
		 else if (winner == 'Y') 
		 {
    		printf("Computer (Y) Wins!\n");
    		break;
		}
		
		if(checkDraw(rows,cols,grid))
		{
			printf("Its A Draw! \n");
			break;
		}
	}
}


int max(int a, int b)
{
	int max=0;
	if(a>b)
	{
		 max =a;
	}
	else
	{
		 max =b;
	}
	
	return max;
}

void initializeboard(int rows, int cols, char grid[][cols])
{
	 for(int i=0; i<rows; i++)
	 {
	 	for (int j=0 ; j<cols; j++)
	 	{
	 		grid[i][j] = ' ';
		 }
	 }
}

int RdropDisc(int rows, int cols, int col, char grid[][cols])
{
	for(int i=rows-1;i>=0;i--)
	{
		if(grid[i][col] == ' ')
		{
			grid[i][col] = 'R';
			return 1;
		}
	}
	return 0;
}

int YdropDisc(int rows, int cols, int col, char grid[][cols])
{
	for(int i=rows-1;i>=0;i--)
	{
		if(grid[i][col] == ' ')
		{
			grid[i][col] = 'Y';
			return 1;
		}
	}
	return 0;
}

void display(int rows, int cols, char grid[][cols])
{
	printf("----------------------------------------\n");
	for(int i = 0; i<rows;  i++)
	{
		printf(" |");
		for(int j=0 ; j<cols; j++)
		{
			printf("%4c",grid[i][j]);
		}
		printf("\n");
	}
}

int checkDraw(int rows, int cols,char grid[][cols])
{
	for (int j=0 ; j<cols; j++)
	{
	 	if (grid[0][j] == ' ')
            return 0;
	}
	
	return 1;
}

int CheckWin(int rows, int cols, char grid[][cols], int connect)
{
    int count;
    
    // check horizontally, vertically, diagonally for each symbol separately
    char symbols[2] = {'R', 'Y'};
    
    for (int s = 0; s < 2; s++)
    {
        char symbol = symbols[s];
        
        // horizontal →
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= cols - connect; j++)
            {
                count = 0;
                for (int k = 0; k < connect; k++)
                    if (grid[i][j + k] == symbol)
                        count++;
                if (count == connect)
                    return symbol;   // return the winner symbol
            }
        }

        // vertical ↓
        for (int i = 0; i <= rows - connect; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                count = 0;
                for (int k = 0; k < connect; k++)
                    if (grid[i + k][j] == symbol)
                        count++;
                if (count == connect)
                    return symbol;
            }
        }

        // diagonal ↘
        for (int i = 0; i <= rows - connect; i++)
        {
            for (int j = 0; j <= cols - connect; j++)
            {
                count = 0;
                for (int k = 0; k < connect; k++)
                    if (grid[i + k][j + k] == symbol)
                        count++;
                if (count == connect)
                    return symbol;
            }
        }

        // diagonal ↙
        for (int i = connect - 1; i < rows; i++)
        {
            for (int j = 0; j <= cols - connect; j++)
            {
                count = 0;
                for (int k = 0; k < connect; k++)
                    if (grid[i - k][j + k] == symbol)
                        count++;
                if (count == connect)
                    return symbol;
            }
        }
    }

    return 0; // no winner yet
}

