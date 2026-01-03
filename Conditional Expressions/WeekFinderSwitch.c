// PF THEORY ASSIGNMENT
// Sarim Bin Azeem 25K-0574

#include <stdio.h>

int main() {
    // Initializing variable for Day
    int Day;

    // Input value for Day
    printf("Enter a value in the range 1 to 7: ");
    scanf("%d", &Day);

    // Switch to find out day
    switch (Day) 
    {
        case 1:
            printf("The Day Is Monday");
            break;
        case 2:
            printf("The Day Is Tuesday");
            break;
        case 3:
            printf("The Day Is Wednesday");
            break;
        case 4:
            printf("The Day Is Thursday");
            break;
        case 5:
            printf("The Day Is Friday");
            break;
        case 6:
            printf("The Day Is Saturday");
            break;
        case 7:
            printf("The Day Is Sunday");
            break;
        default: // If number entered is not between 1 and 7
            printf("Enter a value from 1 to 7!");
            break;
    }

    return 0;
}
