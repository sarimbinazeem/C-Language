//Write a C program that determines the digital access privileges of a user in a university library system. The program should first check whether the user is logged in and, if so, ask for their membership type, which could be free, standard, or premium. Premium members may also be asked whether they are PhD students to decide if additional special access should be granted. The program should display appropriate messages showing which resources the user can access and handle any invalid inputs clearly. Use conditional statements to implement the access rules, ensuring that different membership levels receive the correct permissions and that login status is verified before granting any access.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //initializing variables for details
    char login, membership, PHD; 
    
    
    //Log in or not?
    printf("Are you logged in? (Y=yes, N=no) ");
    scanf(" %c",&login);
    
    if(login=='Y' || login == 'y')
    {
                  printf("What is your membership type? (F for Free, S for Standard, P for Premium) ");
                  scanf(" %c", &membership);
                  
                  if(membership == 'F' || membership == 'f')
                  {
                                printf("You get access to open e-books. \n");
                  }
                  else if (membership == 'S' || membership == 's')
                  {
                       printf("You get access to open e-books and journals \n");
                  }
                  else if (membership == 'P' || membership == 'p')
                  {
                       printf("You get access to open e-books, journals, research papers and datasets. \n");
                       printf("Are you a PHD student? (Y=yes, N=no) ");
                       scanf(" %c",&PHD);
                       if(PHD == 'Y' || PHD == 'y')
                       {
                              printf("You get access to additional archived historical collections. \n");
                       }
                  }
                  else
                  {
                      printf("Invalid Membership Type! \n");
                  }
    }
    
    else
    {
        printf("Access Denied! \n");
    }
    
    system("pause");
    return 0;
}
                  
    
