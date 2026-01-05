//Write a C program that controls access to movies on an online streaming platform based on the user’s age and subscription type. The program should first ask for the user’s age and, if the user is under 18, ask for the movie’s rating to determine whether they are allowed to watch it. For adult users, all movie ratings should be accessible, but the program should ask for the subscription type to decide the streaming quality, such as standard or high definition. Use conditional statements to handle the different scenarios and ensure the program responds appropriately to invalid inputs for age, movie rating, or subscription type. The program should clearly differentiate permissions for minors and adults while giving the correct feedback and access level for each case.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initializing variables for details
    int age;
    char subscription, MovieRating;
    
    //Taking age as input
    printf("Enter Your Age: ");
    scanf("%d", &age);
      
    //Conditions to Assign Ratings and Quality of Movie
    if(age <18)
    {
           //Taking Movie Rating as input
           printf("Enter the Rating of The Movie: (G for General , P for PG-13, R for Rated R) ");
           scanf(" %c", &MovieRating);
           
          if (MovieRating == 'G' || MovieRating == 'g' || MovieRating == 'P'  || MovieRating == 'p') 
          {
                          printf("You are allowed to watch this movie! \n");
          }
          
          else if (MovieRating == 'r' || MovieRating == 'R' ) 
          {
                          printf("You are not allowed to watch this movie! \n");
          }

          else
           {
               printf("Invalid Movie Rating! \n");
           }
    }
    else //For Adult
    {
         //Subscription Input
         printf("You can watch movie of all ratings! \n");
         printf("What is your subscription? (B for Basic, P for Premium) ");
         scanf(" %c", &subscription);
         //Screening 
        if(subscription== 'B' || subscription == 'b')
        {
                          printf("You get SD (Standard Definition) Screening! \n");
        }
        
        else if (subscription== 'P' || subscription == 'p')
        {
             printf("You get HD (High Definition) Screening! \n");
        }
    
        else
        {
            printf("Invalid Subscription Method! \n");
        }
        
    }
    
    system("pause");
    return 0;
}
    
    
        
           
           
           
           
            
    
