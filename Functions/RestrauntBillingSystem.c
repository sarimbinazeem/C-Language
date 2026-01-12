// Write a C program that simulates a restaurant order and billing system using arrays and functions. The program should maintain a fixed menu of food items along with their prices. It should allow the user to display the menu, place orders by selecting item numbers and quantities (with proper input validation), and generate a detailed bill.

// While generating the bill, the program should calculate the total cost based on ordered quantities and item prices, apply a discount if the total bill exceeds a specified amount, and display a formatted receipt showing item names, quantities ordered, individual item totals, the overall total, any discount applied, and the final payable amount. The program should repeatedly display a menu of operations and continue running until the user chooses to exit.

#include <stdio.h>
#define food 5

void display(char items[food][30], int price[food]);
void placeOrder(int quantities[food]);
int calculateTotal(int quantities[food], int price[food]);
float discount(int total);
void displayBill(int quantities[food], int price[food], char items[food][30], int total, float Amount);

int main()
{
    char items[food][30] = {"Biryani","Pizza","Broast","Roll","Shawarma"};

    int price[food] = {200,500,700,250,300};
    int quantities[food] = {0}, choice,operation,total =0;
    float Amount =0;
    do
    {
        printf("\n\n==========Restraunt Billing System==========\n");
        printf("1.Display Menu\n");
        printf("2.Place To Order\n");
        printf("3.Generate Bill\n");
        printf("4.End\n");
        
        printf("Which Operation You Want To Perform: ");
        scanf("%d", &operation);
        
        switch(operation)
        {
            case 1:
            display(items,price);
            break;
            
            case 2:
            placeOrder(quantities);
            break;
            
            case 3:
            total = calculateTotal(quantities,price);
            Amount = discount(total);
            displayBill(quantities,price,items,total,Amount);
            break;
            
            case 4:
            printf("Thank You For Ordering! \n");
            break;
            
            default:
            printf("Invalid Input! \n");
            break;
        }
    }while(operation != 4);
    
    return 0;
}

void display(char items[food][30], int price[food] )
{
    printf(" %-10s  %-10s \n","Items", "Price");
    for(int i=0; i<food;i++)
    {
        printf("%d. %-10s Rs. %d\n",i+1,items[i],price[i]);
    }
}

void placeOrder(int quantities[food])
{
	int item,quantity,choice;
	
	do
	{
			printf("Enter Item Number To Order(1-5): ");
			scanf("%d",&item);
			
			while(item < 1 || item > food)
			{
				printf("Invalid Input! Enter Item Number (1-5): ");
				scanf("%d",&item);
			}
			
			printf("Enter The Quantity You Want: ");
			scanf("%d",&quantity);
			
			while(quantity<=0)
			{
				printf("Invalid Input! Enter Quantity (Positive) ");
				scanf("%d",&quantity);
			}
			
			quantities[item-1] += quantity;
			printf("Added %d Of Item Number %d\n",quantity,item);
			
			printf("Do You Want To Order More? (0=No 1=Yes): ");
			scanf("%d",&choice);
			
			while(choice<0 || choice>1)
			{
				printf("Invalid Input! Enter Correct Choice (0=No 1=Yes): ");
				scanf("%d",&choice);
			}
			
	}while(choice != 0);
	
	printf("Order Added Successfully! \n");
}

int calculateTotal(int quantities[food], int price[food])
{
	int total =0;
	for(int i=0; i<food; i++)
	{
		int subtotal=0;
		subtotal = quantities[i] * price[i];
		total += subtotal;
	}
	return total;
}

float  discount(int total)
{
	float discounted = total;
	if(total>2000)
	{
		printf("You Have Received A 10%% Discount! \n");
		discounted = total * 0.9;
	}
	
	return discounted;
}

void displayBill(int quantities[food], int price[food], char  items[food][30], int total, float Amount)
{
	printf("\n==========Bill==========\n\n");
	printf("%-10s %-10s %-10s\n", "Item", "Qty", "Amount");
	
	for(int i=0; i<food ; i++)
	{
		printf("%-10s %-10d %-10d\n",items[i],quantities[i], price[i] * quantities[i]);
	}
	
	printf("\n----------\n");
	printf("Total Bill: %d\n",total);
	if(total>2000)
	{
		printf("Discount: 10%%\n");
		printf("Final Bill: %.2f\n",Amount);
	}
	printf("\n----------\n");
	
}
