// Liberty Books, a major bookstore chain in Pakistan, needs a new command-line application
// for its smaller branches to manage inventory. You must build this system using parallel arrays
// to track all book data, as it needs to be simple and efficient.
// Core Requirements:
// 1. Data Storage: Use separate, parallel arrays to store information for up to 100 books:
// • int isbns[100];
// • char titles[100][50];
// • float prices[100];
// • int quantities[100]; A single index i will correspond to the same book across all
// • arrays (e.g., isbns[i] and prices[i] refer to the same book).
// 2. Main Menu: The program must be menu-driven using a switch statement, offering
// options to:
// • Add New Book: Add a book's details into the arrays. Prevent duplicate ISBNs.
// • Process a Sale: Ask for an ISBN and the number of copies sold. Find the book
// • and update its quantity. Handle out-of-stock errors.
// • Generate Low-Stock Report: Display the details of all books where the quantity has fallen
// below 5.
// 3. Functions: Each menu option must be a separate function. To modify the inventory, you must
// pass the parallel arrays to the variable tracking the current number of books to these functions.
#include <stdio.h>

#define books 100

//Function Prototypes
void addBook(int isbns[], char titles[][50], float prices[], int quantities[], int *booksCount);
void sale(int isbns[], int quantities[], int count);
void lowStock(int isbns[], char titles[][50], float prices[], int quantities[], int size);

//Function Definitions
void addBook(int isbns[],char titles[books][50], float prices[books], int quantities[books], int *booksCount) //fUNCTION TO ADD BOOKS
{
	if (*booksCount >=books) //Full Inventory Case
	{
		printf("Inventroy Full! Cannot Add more.\n");
		return ;
	}
	
	//User ISBN input
	int isbn;
	
	printf("Enter ISBN: ");
	scanf("%d",&isbn);

	//Duplicate Book Case
	for (int i=0; i<*booksCount; i++)
	{
   		 if(isbns[i]==isbn)
   		 {
      		  printf("Duplicate Book! \n");
     		   return;
        
  		 }
      
	}
	
	//Details Of New Added Book
	isbns[*booksCount]= isbn;

	printf("Enter The Title: ");
	scanf(" %[^\n]", titles[*booksCount]); 

	printf("Enter Price: "); 
	scanf("%f",&prices[*booksCount]);

	printf("Enter Quantity: ");	
	scanf("%d",&quantities[*booksCount]);

	(*booksCount)++;

	//FInal message
	printf("Book Added! \n");

}

void sale(int isbns[], int quantities[],int count) //fUNCTION to Process SAle
{
	//Empty Inventory Case
    if (count == 0)
    {
        printf("Inventory Empty! Cannot Process Sale.");
    }
    else
    {
    	//Details For Sold ISBN 
        int sold,isbn,found=0;
        printf("Enter The Book ISBN Sold: ");
        scanf("%d",&isbn);
        
        //Finding Index At Which Our Book Exists
        for(int i=0; i< count; i++)
        {
            if (isbns[i] == isbn)
            {
                found =1; //Flag
                printf("Enter The Amount Of Copies Sold: ");
                scanf("%d",&sold);
                
                if(sold>quantities[i]) //Invalid Stocks
                { 
                    printf("Invalid Stock! Only %d copies available \n",quantities[i]);
                }   
                else //Valid Stock
                {
                    quantities[i] -= sold;
                    printf("ISBN: %d \n Books Available: %d\n",isbns[i], quantities[i]);
                }
                break;
            }
        }
        if (!found) //Flag Case
        {
            printf("Book with %d ISBN Not Found. \n",isbn);
        }
    }
    
}

void lowStock (int isbns[], char titles[][50], float prices[],int quantities[], int size) //Function To Detect Low Stock
{
    int found = 0;
    
    printf("\n===Low Stock Report===\n");
    for(int i = 0; i<size ; i++)
    {
    
        if(quantities[i]<5) //Low Stock Condition
        {
             found =1;
            printf("ISBN: %d\n",isbns[i]);
            printf("Title: %s\n",titles[i]);
            printf("Price: %.2f\n",prices[i]);
            printf("Quantity: %d\n",quantities[i]);
            
        }
        
    }
    
    if (!found) //Up-to-Date Stock case
    {
        printf("No Low Stock! \n");
    }
    
}



int main()
{
	//Declaring Arrays And Variables
	int isbns[books], quantities[books],operation,booksCount=0;
	char titles[books][50];
	float prices [books];

	//Infinite Loop For Menu And Operations
	while(1)
	{

		printf("\n----------------Library Menu----------------\n\n");
		printf("1.Add New Book\n");
		printf("2.Process A Sale\n");
		printf("3.Low Stock Report\n");
		printf("4.Exit\n");

		printf("Enter Your Operation: ");
		scanf("%d",&operation);	

	
		//Switch To Direct To Respective Function
		switch(operation)
		{
			case 1: //ADDING BOOK
				addBook(isbns,titles,prices,quantities,&booksCount);
				break;

			case 2: //Processing A Sale
				sale(isbns,quantities, booksCount);
				break;

			case 3: //Low Stock Case
				lowStock(isbns,titles,prices,quantities,booksCount);
				break;

			case 4: //Exit Case
				printf("Exiting The Program \n");
				return 0;

			default: //Invalid CASE
				printf("Invalid Input! Try Again \n");
				break;

		}
	}
	return 0;

}