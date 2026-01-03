//Write a C program to check whether five given card values form a Full House, where a Full House contains three cards of the same rank and two cards of another rank.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1,c2,c3,c4,c5;
    
    //Ask the user to enter any card from 1-13 
    printf("Enter 5 cards (type value from 1 to 13)\n");
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
    
    /*
    Full House:
         -Three Card of one rank 
         -Two Card of different ranks
    */
    
    //Checking all possibilites of AAA + BB
    
    //Case 1: First three are same Last two are different (AAA BB)
    if ((c1 == c2 && c2==c3 && c4 ==c5 && c1!=c5) ||
    
       //Case 2: First two are different Last three are same (BB AAA)
       (c3==c4 && c4 == c5 && c1 == c2 && c3!= c1) ||  
       
        //Case3: Mixed grouping
        (c1==c3 && c3==c5 && c2==c4 && c1!=c2)|| // ABABA
        (c1==c2 && c2==c5 && c3==c4 && c1!=c3)|| //AABBA
        (c1==c4 && c4==c5 && c2==c3 && c1!=c2)|| //ABBAA
        (c2==c3 && c3==c4 && c1==c5 && c2!=c1)|| //BAAAB
        (c1==c2 && c2==c4 && c3==c5 && c1!=c3)|| //AABAB
        (c1==c3 && c3==c4 && c2==c5 && c1!=c2)||//ABAAB
        (c2==c3 && c3==c5 && c1==c4 && c2!=c1 )|| //BAABA
        (c2==c4 && c4==c5 && c1==c3 && c2!=c1)) //BABAA
        {
                printf("This is a Full House! \n");
        }
    else 
    {
         printf("This is not a Full House!\n");
    }
    system("pause");
    return 0;
}


