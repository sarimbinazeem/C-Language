// Write a C program that simulates a stationery shop management system using arrays and functions. The program should:

// Allow the user to add items to the inventory:

// Take the item name and price as input.

// Prevent duplicate items from being added.

// Display all available items in the shop.

// Allow the user to edit the price of an existing item.

// View the complete inventory with item names and their prices.

// Generate a receipt for purchases:

// Let the user select multiple items and specify quantities.

// Calculate the total bill.

// Apply a discount (e.g., 25% off for totals above a certain threshold).

// Display the final bill with item names, quantities, and prices.

// Key Requirements:

// Use functions for adding items, displaying items, editing prices, viewing inventory, generating receipts, and handling string input.

// Maintain arrays to store item names, prices, and purchased quantities.

// Validate user input wherever applicable.

// Allow repeated operations until the user chooses to exit.
#include <stdio.h>
#define PRODUCTS 100

void addItems(char items[][30], float price[], int *itemsCount);
int findIndex(char items[][30], char item[], int itemsCount );
void displayItems(char items[][30], int itemsCount);
void viewInventory(char items[][30], float price[], int itemsCount);
void editPrice(char items[][30], float price[], int itemsCount);
void generateReceipt(char items[][30], float price[],int itemsCount, int quantities[]);
void inputString(char str[]);

int main()
{
	char items[PRODUCTS][30];
	float price[PRODUCTS];
	int quantities[PRODUCTS] = {0};
	int operation,itemsCount=0;
	
	do
	{
		printf("\n\n================Stationery Shop Management System================\n\n");
		printf("1.Add Items\n");
		printf("2.Display Available Items\n");
		printf("3.Edit Price Of An Item\n");
		printf("4.View All Items With Prices\n");
		printf("5.Generate A Receipt\n");
		printf("6.End\n");
		
		printf("What Operation Do You Want To Perform? ");
		scanf("%d",&operation);
		
		switch(operation)
		{
			case 1:
				addItems(items,price,&itemsCount);
				break;
				
			case 2:
				displayItems(items,itemsCount);
				break;
				
			case 3:
				editPrice(items,price,itemsCount);
				break;
				
			case 4:
				viewInventory(items,price,itemsCount);
				break;
				
			case 5:
				generateReceipt(items,price,itemsCount,quantities);
				break;
				
			case 6:
				printf("Thank You For Shopping!\n");
				break;
				
			default:
				printf("Invalid Operation! ");
				break;
		}
	}while(operation != 6);

	return 0;
}

void inputString(char str[])
{
	int i=0;
	char ch;
	scanf("%c",&ch);
	
	while(ch == '\n')
	{
		scanf("%c",&ch);
	}
	
	while(ch != '\n' && i<29)
	{
		str[i++] = ch;
		scanf("%c",&ch);
	}
	
	str[i] = '\0';
}

int findIndex(char items[][30],char item[],int itemsCount)
{
	for(int i=0; i<itemsCount; i++)
	{
		int	j =0;
		while(items[i][j] != '\0' && item[j] != '\0' && items[i][j] == item[j])
		{
			j++;
		}
		
		if(items[i][j] == '\0' && item[j] == '\0')
		{
			return i;
		}
	}
	
	return -1;

}


void addItems(char items[][30], float price[], int *itemsCount)
{
	char item[30];
	float Price;
	int i=0;
	
	printf("Enter The Name Of The Item: ");
	inputString(item);
	
	int index = findIndex(items,item,*itemsCount);
	
	if(index != -1)
	{
		printf("Item already Exists! \n");
	}
	else
	{
		 i = 0;
		while(item[i] != '\0')
		{
			items[*itemsCount][i] = item[i];
			i++;
		}
		
		items[*itemsCount][i] = '\0';
		
		printf("Enter The Price: ");
		scanf("%f",&Price);
		
		price[*itemsCount] = Price;
		
		(*itemsCount)++;	
		printf("Item added successfully!\n");		
	}	
}

void displayItems(char items[][30], int itemsCount)
{
	printf("\n==========Available Items==========\n");
	for(int i=0; i<itemsCount; i++)
	{
		printf("%s\n",items[i]);
	}
	printf("Items Successfully Displayed! \n");
}

void viewInventory(char items[][30], float price[], int itemsCount)
{
	printf("%-10s %-10s \n","Items","Price");
	for(int i=0; i<itemsCount; i++)
	{
		printf("%-10s %.2f\n",items[i],price[i]);
	}
	
	printf("Inventory Successfully Displayed! \n");
}

void editPrice(char items[][30], float price[], int itemsCount)
{
	char ch,item[30];
	float Price;
	int i=0;
	printf("Which Item's Price Do You Want To Alter?: ");
	inputString(item);
	
	int index =findIndex(items,item,itemsCount);
	
	if(index == -1)
	{
		printf("Item Not Found! \n");
	}
	else
	{
		printf("Enter New Price: ");
		scanf("%f",&Price);
		
		price[index] = Price;
		
		printf("Price Updated Successfully! \n");
	}
 }
 
 
void generateReceipt(char items[][30], float price[],int itemsCount, int quantities[])
{
	float discounted = 0, total = 0;
	int choice;
	do 
	{
   		 char ch, item[30];
   		 int quantity, i = 0;
    	float itemTotal = 0;
		printf("What Do You Want To Purchase?: ");
		inputString(item);
	
		int index =findIndex(items,item,itemsCount);
	
		if(index == -1)
		{
			printf("Item Not Found! \n");
		}
		else
		{
			printf("Enter The Amount You Want: ");
			scanf("%d", &quantity);
			
			itemTotal = price[index] * quantity;
			total += itemTotal;
			
			quantities[index] += quantity;
			
			printf("\n Current Total: %.2f\n",total);
		}		
	
		printf("Do You Want To Add More Items? (Yes = 1, No= 0): ");
		scanf("%d", &choice);
	
		
	
		} while(choice !=0);
	
		printf("\n==========Receipt==========\n\n");
		
		printf("%-10s %-10s %-10s\n","Items", "Quantity","Price");
		for(int i=0; i<itemsCount; i++)
		{
			printf("%-10s %-10d %.2f\n",items[i],quantities[i],price[i] * quantities[i]);
		}
		
		if (total > 5000)
		{
			printf("\n25 Percent Discount Applied! \n");
			 discounted = total * 0.75;
			 printf("\nFinal Bill: %.2f",discounted);
		}
		else
		{
			printf("\nFinal Bill: %.2f",total);
		}
	
}
