
// A supermarket wants to manage its inventory and invoices generated each day to have a clear look
// at the stock and purchases. To increase code maintainability, multiple functions have been made
// for each functionality. Make efficient use of conditional statements, loops, arrays and functions,
// wherever necessary, to fulfil the requirements mentioned below.
// Write a neat and organized C code for a menu driven application in which a user is free to choose
// and perform any of the following options:
// • Customer information:
// • A function that asks the user to enter the name and CNIC number of the customer.
// • Display inventory
// • This function will list all the products along with their quantity in stock

// • Update inventory
// • Whenever a product is purchased, its quantity in stock should be updated timely
// • Add item to cart
// • A user can add items to the cart along with their quantity.
// • Update inventory
// • Display total bill
// • Once the order is done, a user can proceed to check out and display the total bill.
// • Ask for promocodes. We are offering a promocode of Eid2025, ask the customer if
// he/she has a voucher then apply 25% discount on the total bill

// • Show invoice
// • Display the customer details and the final bill with/without discount.
// • Display the bill with and without discount
// • Exit the system

#include <stdio.h> 
#define NAME_LIMIT 50
#define CNIC_LIMIT 20
#define PRODUCTS 4
#define CART_LIMIT 10

//Function Prototype
// Function Prototypes
void customerInfo(char name[], char CNIC[]);
void inventory(int product_code[], int quantity[], int price[]);
void addItem(int product_code[], int quantity[], int price[], int cart_code[], int cart_quantity[], int *cart_count);
float bill(int cart_code[], int cart_quantity[], int product_code[], int price[], char promocode[], int cart_count, float *total);
void invoice(float discounted_total,float total,  char name[],char CNIC[]);
int findIndex(int product_code[], int code);

//Function Definitions
void customerInfo(char name[],char CNIC[]) //Function To Get Information of Customer
{
	char ch;
	int i=0;
	//Taking Input Of Name Character By Character
	printf("Enter The Customer Name: ");
	scanf("%c",&ch);
	
	//For Buffer
	while(ch == '\n')
	{
		scanf("%c",&ch);
	}
	
	//Condition Until Someone Press Space Or Goes Out Of Bond
	while(ch != '\n' && i<254)
	{
		name[i++] = ch;
		scanf("%c",&ch);
	}
	
	printf("Enter Customer CNIC (13 Digits): ");
	scanf("%s",CNIC);
	
	printf("Customer Information Saved! \n");
}

void inventory(int product_code[],int quantity[],int price[]) //Function To Display Inventory
{
	printf("Product Code\tQuantity\tPrice\n");

	for(int i=0;i<PRODUCTS; i++)
	{
		printf("%d \t\t %d \t\t %d\n",product_code[i],quantity[i],price[i]);
	}
}

int findIndex (int product_code[],int code) //Function To Find Required KEY By Linear Searching
{
	for (int i=0; i<PRODUCTS; i++)
	{
		if (product_code[i] == code)
		{
			return i;
		}
	}
	return -1;
	
}

void addItem(int product_code[], int quantity[], int price[], int cart_code[],int cart_quantity[],int *cart_count) //Function To Add Item To The Cart
{
	int code,req_quantity, index;
	
	printf("\nEnter Product Code: ");
	scanf("%d",&code);
	
	index = findIndex(product_code, code);
	
	if (index == -1)
	{
		printf("Product Code Not Found! \n");
		
	}
	else
	{
		printf("Enter The Quantity You Want: ");
		scanf("%d",&req_quantity);
		
		if(req_quantity>quantity[index]) //Low Stock Alert
		{
			printf("Not Enough Stock! %d Available \n",quantity[index]);
		
		}
		else
		{
			quantity[index] -= req_quantity;
			cart_code[*cart_count] = code;
			cart_quantity[*cart_count] = req_quantity;
			(*cart_count)++;
			
			printf("Added To Cart Successfully! \n");
		}
	}
}
		

float bill(int cart_code[], int cart_quantity[], int product_code[], int price[], char promocode[], int cart_count, float *total) //Function To  Calculualte Bill
{
	int discountpromocode=0,subtotal =0;
	float discounted_total=0;
	
	printf("\n===Cart===\n");
	printf("Prduct Code\tQuantity\tPrice\tSubtotal\n");
	for (int i=0; i<cart_count ; i++)
	{
		for (int j=0 ; j<PRODUCTS; j++)
		{
			if(product_code[j] == cart_code[i])
			{
				subtotal = price[j] * cart_quantity[i];
				printf("%d \t\t %d \t\t %d \t\t %d\n", product_code[j], cart_quantity[i], price[j], subtotal);
				*total += subtotal;
			
				break;
			}

		}
		
	}
	
	//Printing Total Bill
	printf("\nTotal Bill:  %.2f\n",*total);
	
	//PromoCode Check
	printf("Do You Have A Promocode: (Eid2025 for Yes , No for no) ");
	scanf("%s",promocode);
	
	char validpromo[] = "Eid2025";
	int same =1;
	
	for (int i = 0; validpromo[i] != '\0' && promocode[i] != '\0'; i++)

	{
		if (validpromo[i] != promocode[i])
		{
			 same = 0;
			break;
		}
	}
	
	if(same)
	{
		discountpromocode = 1;

	}


	if(discountpromocode)
	{
		printf("25 percent Discount Applied On Bill Of %.2f \n",*total);
		discounted_total = *total - (*total * 0.25);
	}
	else
    {
    	printf("No Discount Applied!\n");
        discounted_total = *total; 
    }
	
	
	return discounted_total;
}

void invoice(float discounted_total,float total,  char name[],char CNIC[]) //Function To Display Final Disocunted Bil With Custoemr Information
{
	printf("\n\n===Invoice===\n\n");
	printf("Customer Name: %s\n", name);
    printf("CNIC: %s\n", CNIC);
	printf("Total Bill: %.2f \n ",total);
	printf("Discounted Bill: %.2f \n",discounted_total);
}

int main()
{
	//Declaring Arrays
	
	//Personal information
	char name[NAME_LIMIT],CNIC[CNIC_LIMIT];
	
	//Products Information
	int product_code[PRODUCTS] = {1,2,3,4};
	int quantity[PRODUCTS] = {50,10,20,8};
	int price[PRODUCTS] = {100,200,300,150};

	//Cart Information
	int cart_code[CART_LIMIT], cart_quantity[CART_LIMIT], cart_count=0;
	
	//Bill Information
	float total=0, discounted_total;
	int choice;
	char promocode[20];
	
	do{
		//Menu Of Operations
		printf("\n=========Supermarket Menu==========\n\n");
		printf("1.Enter Customer Information: \n");
		printf("2.Display Inventory: \n");
		printf("3.Add Item To Cart: \n");
		printf("4.Display Total Bill: \n");
		printf("5.Show Invoice: \n");
		printf("6.End \n");
		
		//Taking Input For user CHoice
		printf("Enter Your Choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: //Customer Information FUNCTION CALL
				customerInfo(name,CNIC);
				break;
				 
			case 2: //Display Supermarket Inventory Function Call
				inventory(product_code, quantity, price);
				break;
				
			case 3: //Adding item and Updating Cart And Stocks Function Call
				addItem(product_code, quantity, price, cart_code,cart_quantity,&cart_count);
				break;
				
			case 4: // Calculating Bill FUnction Call
				discounted_total = bill(cart_code, cart_quantity, product_code, price, promocode, cart_count, &total);
				break;
				
			case 5: //Displaying Total Bill FUnction Call
				invoice(discounted_total,total,name,CNIC);
				break;
				
			case 6: //Exiting Case
				printf("Thank you for shopping with us! \n");
				break;
				
			default: //Invalid CASE
				printf("Invalid Input! \n");
				break;
			
			
		} 
		
		
	}while(choice !=6 );
	return 0;
}

