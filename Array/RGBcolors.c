//Write a C program that simulates an RGB color cube using a three-dimensional array. The program should take the number of layers as input (validate that it is a positive value) and then allow the user to enter RGB values for each position in a 3×3 grid for every layer. Finally, display the complete RGB cube in a formatted layout showing each layer with its corresponding RGB values.

#include <stdio.h>

int main()
{
	//Welcome Message
	printf("--------------------RGB Color --------------------\n\n");
	
	//Initializing Variables
	int layers;
	
	//Taking Input
	printf("Enter Number Of Layers: ");
	scanf("%d",&layers);
	
	while (layers < 1) //Input Validation
    {
        printf("Invalid input! Enter a positive number: ");
        scanf("%d", &layers);
    }
    
    //Declaration of Array
    int rgb[layers][3][3];
    
    //Taking Input For Array
    for (int l=0; l<layers; l++)
    {
    	printf("\n--------------------Layer %d--------------------\n", l + 1);
    	for(int r=0; r<3;r++)
    	{
    		for(int g = 0; g < 3; g++)
    		{
    			printf("Enter RGB value at position [%d][%d]: ", r + 1, g + 1);
                scanf("%d", &rgb[l][r][g]);
			}
		}

	}
	
	//Final Summary
	printf("\n--------------------RGB Cube Values--------------------\n");
	for (int l=0; l<layers; l++)
    {
    	printf("\n Layer %d: \n",l+1);
    	for(int r=0; r<3;r++)
    	{
    		for(int g = 0; g < 3; g++)
    		{
    			printf("%4d",rgb[l][r][g]);
			}
			printf("\n");
		}

	}
	
	return 0;
}