////SARIM BIN AZEEM 25K-0574
//Question: Suspicious Transaction Detection Program (C Language)
//
//Write a C program to detect suspicious financial transactions based on given rules.
//
//The program should take the following inputs from the user:
//
//Transaction Amount (recent transaction)
//
//Total amount of transactions done earlier in the day
//
//Number of transactions performed in the last hour
//
//Country Code
//
//1 → Pakistan
//
//2 → UAE
//
//Any other value → Untrusted country
//
//Conditions for Suspicion
//
//A transaction is considered suspicious if any one of the following conditions is true:
//
//Daily Limit Exceeded
//
//The daily transaction limit is 5000.
//
//If the sum of the current transaction and previous transactions of the day exceeds this limit, flag the transaction.
//
//Untrusted Country
//
//If the transaction is made from any country other than Pakistan (1) or UAE (2), flag it as suspicious.
//
//Too Many Transactions in an Hour
//
//If the total number of transactions in the last hour including the current transaction exceeds 3, flag it.
//
//Program Requirements
//
//Use appropriate variables to store transaction details.
//
//Use conditional statements to check each rule separately.
//
//If the transaction is suspicious:
//
//Display “Suspicious Transaction!”
//
//Print all applicable reasons for suspicion.
//
//If none of the conditions are violated:
//
//Display “Normal Transaction!”

#include <stdio.h>
#include <stdlib.h> ////My .exe file don't work without this library

int main()
{
    
    //Initiliazing Transaction Details
    int Transaction_Per_Hour, CountryCode,Daily_Limit;
    float Transaction_Amount, Total_Transaction, New_Total; //Transaction_Amount -> Recent transaction ; Total_Transaction-> Transaction done today before recent one
    
    
    //For Suspicion 
    int Suspicion = 0;
    int LimitFlag=0, CountryFlag=0, ManyTransactionFlag=0;
    
    
    //Getting Input from the user of transaction details
    printf("Enter Transaction Amount \n");
    scanf("%f", &Transaction_Amount);
    
    printf("Enter the amount of transaction done today before this one:  \n");
    scanf("%f", &Total_Transaction);
    
    printf("Enter Number of Transactions in Last Hour: \n");
    scanf("%d", &Transaction_Per_Hour);

    printf("Enter Country Code (1=Pakistan, 2=UAE, Others=Untrusted): \n");
    scanf("%d", &CountryCode);
    
    
    //Setting the daily limit according to the question
    Daily_Limit = 5000;
    
    //Calculating New Limit by adding Recent Transaction and Transaction done before the recent one
    New_Total = Transaction_Amount + Total_Transaction;
    
    
    //Condition 1 : Daily Limit check
    if (New_Total > Daily_Limit)
    {
                  Suspicion = 1;
                  LimitFlag =1;
    }
                  
    
    //Condition 2: Country Check
    
    if (CountryCode != 1 && CountryCode != 2)
    {
                Suspicion=1;
                CountryFlag=1;           
    }
    
    //Condition 3: Many transaction per hour 
    
    if ((Transaction_Per_Hour + 1)>3) // We add 1 to include recent transaction aswell
    {
                              Suspicion =1;
                              ManyTransactionFlag=1;
                              
    }
    
    //Print Suspicion and Reasons
    if (Suspicion==1)
    {
                  printf("Suspicious Transaction! Reasons: \n");
                  //Daily limit reason
                  if(LimitFlag==1)
                  {
                               printf("Daily Limit Exceeded!\n");
                  }
                  
                  //Country Reason
                  if(CountryFlag==1)
                  {
                               printf("Untrusted Country!\n");
                  }
                  
                  //Many transaction Reason
                  if(ManyTransactionFlag==1)
                  {
                               printf("Too many transactions in one hour!\n");
                  }
                  
                  
    }
    
    else
    {
        printf("Normal Transaction!\n");
    }
    
    system("pause");
    return 0;
}
                              
    
