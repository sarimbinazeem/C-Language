//Task 10 – Multi-Level Cybersecurity Check
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Pre-defined Details
    char correct_username[20] = "SarimBinAzeem";
    char correct_password[20] = "Fast1234";
    int correct_OTP = 1234;

    //Variables from User Input
    int OTP;
    char password[20], username[20], twofactor;

    //Taking Input of username
    printf("Enter your username: ");
    scanf("%s", username);

    //Check Username
    if (strcmp(username, correct_username) == 0) // strcmp returns 0 when both are equal
    {
        printf("Your Username Exists! \n");

        //Taking PASSWORD as input
        printf("Enter your password: ");
        scanf("%s", password);

        //Check Password 
        if (strcmp(password, correct_password) == 0)
        {
            //Enter TwoFactor
            printf("Is Two Factor Authentication enabled? (Y for Yes, N for No) ");
            scanf(" %c", &twofactor);
            
            //Check Twofactor
            if (twofactor == 'y' || twofactor == 'Y')
            {
                //Enter OTP
                printf("Enter The OTP: ");
                scanf("%d", &OTP);
                
                //Check OTP
                if(OTP == correct_OTP)
                {
                    printf("Access Granted! \n");
                }
                else
                {
                    printf("Access Denied! (Wrong OTP) \n");
                }
                
            }
            else
            {
                printf("Access Granted! \n");
            }
        }
        else
        {
            printf("Access Denied! (Wrong Password) \n");
        }
    }    
    else
    {
        printf("Access Denied! (Wrong Username) \n");
    }
    
    system("pause");
    return 0;
}
