// Write a C program that takes five single-digit integers as input and counts how many times each digit from 0 to 9 appears.

// The program should display the frequency of every digit, even if a digit does not occur.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initiliazing variables for counting the Occurrences
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    
    //Initiliazing variables for numbers
    int n1,n2,n3,n4,n5;
    
    //Taking input for numbers
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    //Using conditions to increase count for Occurrences
    //For number 1
    if(n1==0)
    {
             c0++;
    }
    else if(n1==1)
    {
         c1++;
    }
    else if(n1==2)
    {
         c2++;
    }
    else if(n1==3)
    {
         c3++;
    }
    else if(n1==4)
    {
         c4++;
    }
    else if(n1==5)
    {
         c5++;
    }
    else if(n1==6)
    {
         c6++;
    }
    else if(n1==7)
    {
         c7++;
    }
    else if(n1==8)
    {
         c8++;
    }
    else if(n1==9)
    {
         c9++;
    }
    
    //For Number 2
    if(n2==0)
    {
             c0++;
    }
    else if(n2==1)
    {
         c1++;
    }
    else if(n2==2)
    {
         c2++;
    }
    else if(n2==3)
    {
         c3++;
    }
    else if(n2==4)
    {
         c4++;
    }
    else if(n2==5)
    {
         c5++;
    }
    else if(n2==6)
    {
         c6++;
    }
    else if(n2==7)
    {
         c7++;
    }
    else if(n2==8)
    {
         c8++;
    }
    else if(n2==9)
    {
         c9++;
    }
    
    //For Number 3
    if(n3==0)
    {
             c0++;
    }
    else if(n3==1)
    {
         c1++;
    }
    else if(n3==2)
    {
         c2++;
    }
    else if(n3==3)
    {
         c3++;
    }
    else if(n3==4)
    {
         c4++;
    }
    else if(n3==5)
    {
         c5++;
    }
    else if(n3==6)
    {
         c6++;
    }
    else if(n3==7)
    {
         c7++;
    }
    else if(n3==8)
    {
         c8++;
    }
    else if(n3==9)
    {
         c9++;
    }

    //For number 4
    if(n4==0)
    {
             c0++;
    }
    else if(n4==1)
    {
         c1++;
    }
    else if(n4==2)
    {
         c2++;
    }
    else if(n4==3)
    {
         c3++;
    }
    else if(n4==4)
    {
         c4++;
    }
    else if(n4==5)
    {
         c5++;
    }
    else if(n4==6)
    {
         c6++;
    }
    else if(n4==7)
    {
         c7++;
    }
    else if(n4==8)
    {
         c8++;
    }
    else if(n4==9)
    {
         c9++;
    }
    
    //For number 5
    if(n5==0)
    {
             c0++;
    }
    else if(n5==1)
    {
         c1++;
    }
    else if(n5==2)
    {
         c2++;
    }
    else if(n5==3)
    {
         c3++;
    }
    else if(n5==4)
    {
         c4++;
    }
    else if(n5==5)
    {
         c5++;
    }
    else if(n5==6)
    {
         c6++;
    }
    else if(n5==7)
    {
         c7++;
    }
    else if(n5==8)
    {
         c8++;
    }
    else if(n5==9)
    {
         c9++;
    }
    
    //Print occurances 
    printf("Number\tNumber Of Occurences: \n");
    printf("0 \t %d\n",c0);
    printf("1 \t %d\n",c1);
    printf("2 \t %d\n",c2);
    printf("3 \t %d\n",c3);
    printf("4 \t %d\n",c4);
    printf("5 \t %d\n",c5);
    printf("6 \t %d\n",c6);
    printf("7 \t %d\n",c7);
    printf("8 \t %d\n",c8);
    printf("9 \t %d\n",c9);
    
    system("pause");
    return 0;
}
    
    
    
    
    
