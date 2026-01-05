//Write a C program to validate banking transactions. The program should first take the account balance as input and then allow up to three withdrawal attempts. For each withdrawal, check if the requested amount exceeds a daily limit of 50,000 or is greater than the available balance. If either condition occurs, the transaction is invalid, and the program should increase a counter for invalid transactions. If the user reaches three invalid transactions, the account should be blocked, and the program should terminate. For valid withdrawals, the program should deduct the amount from the balance and display the remaining balance. Use conditional statements to check each transaction and ensure the program handles all edge cases appropriately.

#include <stdio.h>
#include <stdlib.h>

int  main()
{
     //Initialiazing Variables for transaction
     int transaction1,transaction2,transaction3, balance;
     int InvalidCount= 0;
     
     //Taking input for amount
     printf("Enter the amount present in your account: ");
     scanf("%d", &balance);
     
     //--------------------------------Transaction 1--------------------------------------


     //Taking input for transaction 1
     printf("Enter the amount to be withdrawn: ");
     scanf("%d", &transaction1);
     
     //Conditions for invalid transactions 
     if (transaction1 > 50000)
     {
          printf ("Invalid Transaction! (Daily Limit exceeded) \n");
          InvalidCount++;
     }
     
     else if(transaction1 > balance )
     {
                  printf ("Invalid Transaction! (Insufficient balance) \n");
                  InvalidCount++;
     }
     
     else
     {
         balance = balance - transaction1;
         printf("Transaction Successful! Remaining balance is = %d \n", balance);
     }
     
     if(InvalidCount >=3)
     {
                     printf("Account blocked! (Too many transaction attempts) \n");
                     system("pause");
                     return 0;
     }
     
     //--------------------------------Transaction 2--------------------------------------
     
     //Taking input for transaction 2
     printf("Enter the amount to be withdrawn: ");
     scanf("%d", &transaction2);
     
     //Conditions for invalid transactions 
     if (transaction2 > 50000)
     {
          printf ("Invalid Transaction! (Daily Limit exceeded) \n");
          InvalidCount++;
     }
     
     else if(transaction2 > balance )
     {
                  printf ("Invalid Transaction! (Insufficient balance) \n");
                  InvalidCount++;
     }
     
     
     else
     {
         balance = balance - transaction2;
         printf("Transaction Successful! Remaining balance is = %d \n", balance);
     }
     
     if(InvalidCount >=3)
     {
                     printf("Account blocked! (Too many transaction attempts) \n");
                     system("pause");
                     return 0;
     }
     
     //--------------------------------Transaction 3--------------------------------------
     
     //Taking input for transaction 3
     printf("Enter the amount to be withdrawn: ");
     scanf("%d", &transaction3);
     
     //Conditions for invalid transactions 
     if (transaction3 > 50000)
     {
          printf ("Invalid Transaction! (Daily Limit exceeded) \n");
          InvalidCount++;
     }
     
     else if(transaction3 > balance )
     {
                  printf ("Invalid Transaction! (Insufficient balance) \n");
                  InvalidCount++;
     }
     
     
     else
     {
         balance = balance - transaction3;
         printf("Transaction Successful! Remaining balance is = %d \n", balance);
     }
     
     if(InvalidCount >=3)
     {
                     printf("Account blocked! (Too many transaction attempts) \n");
                     system("pause");
                     return 0;
     }
     
     system("pause");
     return 0;
}
     
     
     
     
     
     
