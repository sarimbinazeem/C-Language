//Sarim Bin Azeem 25k-0574
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initializing variables for Day
    int Day;

    // Input value for DAY
    printf("Enter a value in the range 1 to 7: ");
    scanf("%d", &Day);

    // If-ELSE ladder to find out day
    if (Day == 1) 
    {
        printf("The Day Is Monday\n ");
    }
    else if (Day == 2) 
    {
        printf("The Day Is Tuesday\n");
    }
    else if (Day == 3)
     {
        printf("The Day Is Wednesday\n");
    }
    else if (Day == 4) 
    {
        printf("The Day Is Thursday\n");
    }
    else if (Day == 5) 
    {
        printf("The Day Is Friday\n");
    }
    else if (Day == 6) 
    {
        printf("The Day Is Saturday\n");
    }
    else if (Day == 7) 
    {
        printf("The Day Is Sunday\n");
    }
    
    // Other possibilities
    else 
    {
        printf("Enter a value from 1 to 7!\n");
    }
    
    system("pause");
    return 0;
}
