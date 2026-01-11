// Implement a Stack using arrays and functions.
// Your program should support the following operations through a menu-driven interface:
// • PUSH: Insert an element into the stack
// • POP: Remove the top element from the stack
// • PEEK: Display the top element without removing it
// • DISPLAY: Show all elements currently in the stack
// • EXIT: Terminate the program
// The stack should be implemented using a 1D array and each operation should have a separate
// user-defined functions (function protype is given just for the reference, you can opt any other
// function type if you want):
// 1. void push(int stack[], int top, int maxSize);
// 2. void pop(int stack[], int top);
// 3. void peek(int stack[], int top);
// 4. void display(int stack[], int top);
// You should also check for the overflow and underflow conditions in case of PUSH and POP
// operations.

#include <stdio.h>
#define LIMIT 100

//Function Prototypes
int push(int stack[],int top, int size);
int pop(int stack[],int top);
void peek(int stack[],int top);
void display(int stack[],int top);

//Function Declaration
int push(int stack[],int top, int size) //Function To Add Items
{
	//DECLARING VARIABLE
	int value;
	if (top == size-1) //Overflow Case (Maximum Items)
	{
		printf("OverFlow! Cannot Push More Items. \n");
	}
	else
	{
		//Add New Item
		printf("Enter Value To Be Pushed: ");
		scanf("%d",&value);
		top++;
		stack[top] = value;
		
		printf("Element Pushed Successfully! \n");
	}
	return top; //returning top because we changed it inside the function
	
}

int pop(int stack[],int top) //Function To Remove Top Item
{
	if(top == -1) //UNDERFLOW case (No Items)
	{
		printf("UnderFlow! Cannot Pop An Item. \n");
	}
	else
	{ 
		//Remove Top Element
		printf("Popped Element: %d\n",stack[top]);
		stack[top] = 0;
		top--;
		
		printf("Element Popped Successfully! \n");
	}
	return top; //returning top because we changed it inside the function
}

void peek(int stack[],int top) //Function To See THe Top ELement
{
	if (top == -1) //Empty Stack Case
	{
		printf("Stack Empty! \n");
	}
	else //Displaying Top Element
	{
		printf("Top Element Is: %d\n",stack[top]);
		printf("Element Peeked Successfully! \n");
	}
	
}

void display(int stack[],int top) //Function To Dispay Whole Stadk
{
	if (top == -1) //Empty Stack Case
	{
		printf("Stack Empty! \n");
	}
	else
	{
		//Displaying Every Element of Stack Through Looping
		printf("\n===Stack Elements: (Top To Bottom)===\n");
		for (int i=top; i>=0;i--)
		{
			printf("%d \n",stack[i]);
			
		}
		printf("Elements Displayed Successfully! \n");
	}
	
}

int main()
{
	//Declaring Variables
	int top = -1,stack[LIMIT],choice;
		
	//Infinite Loop For Stack Operations Menu	
	while(1)
	{
		//STACK MENU
		printf("----------------Stack Operations Menu----------------\n\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.Display\n");
		printf("5.Exit\n");
		
		//Taking Input Of Choice
		printf("Enter Your Choice: ");
		scanf("%d",&choice);	
		
		//Conditions To Perform Respective Operations
		switch(choice)
		{
			case 1: //Adding New Item
				top = push(stack,top,LIMIT);
				break;
			
			case 2: //Removing Top Item
				top = pop(stack,top);
				break;
				
			case 3: //Displaying Top Item
				peek(stack,top);
				break;
				
			case 4: //Displaying All Items
				display(stack,top);
				break;
				
			case 5: //Exit Program
				printf("Exiting The Program \n");
				return 0;
				
			default: //Invalid Case
				printf("Invalid Input! Try Again \n");
				break;
		}
		
	}
	return 0;
}