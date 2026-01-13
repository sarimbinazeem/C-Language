// Write a C program that implements a multi-level cybersecurity authentication system to control user access. The program should store predefined credentials including a valid username, password, and a one-time password (OTP). First, prompt the user to enter a username and verify whether it matches the stored username. If the username is correct, ask the user to enter a password and validate it accordingly. Upon successful password verification, check whether two-factor authentication is enabled by taking the user’s choice as input. If two-factor authentication is enabled, prompt the user to enter an OTP and verify it against the predefined OTP. Grant access only if all required authentication checks are passed successfully; otherwise, deny access and display an appropriate error message at each failed stage. The program should clearly indicate whether access is granted or denied based on the validation results.
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
