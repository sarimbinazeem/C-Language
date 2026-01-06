// Write a C program that simulates a fuel pump dispensing petrol using a counter-controlled loop. The program should ask the user to enter how many litres of petrol they want and must ensure that the input is valid (non-negative). If the user enters zero litres, the program should display an appropriate message indicating that no petrol was dispensed. Otherwise, the program should dispense petrol one litre at a time, display the number of litres filled so far, and continuously calculate and show the total cost based on a fixed price per litre. After all litres are dispensed, the program should display the final amount the customer has to pay.

#include <stdio.h>

int main()
{
    //Initializing  varaibles for petrol
    int PetrolPerLitre = 260, litres, TotalCost=0;

    //Taking valid input of litres through looping
    do
    {
        printf("How many litres of petrol you want? ");
        scanf("%d", &litres);

    } while(litres<0);
    

    //Conditions and Loops to calculate cost
    if (litres == 0)
    {
        printf("No petrol dispensed! \n");
        
    }
    else
    {
         for(int i=1; i <= litres ; i++)
         {
             printf("%d Litres have been filled! \n", i);
             TotalCost = TotalCost + PetrolPerLitre;
             printf("Cost for %d Litres is: %d \n", i, TotalCost);   
          }
          printf("You have to pay %d \n", TotalCost);
     }

    

    return 0;
}