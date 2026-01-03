// Write a C program that manages an employee’s weekly shift schedule and checks for any scheduling conflicts.

// The program should take the working hours and availability of an employee for each day of the week and generate a summary based on the following limits:

// The maximum working hours per day is 8 hours

// The maximum total working hours per week is 40 hours

// If an employee is not available on a day, they should not be assigned any working hours for that day

// The program should report whether the schedule is valid or contains conflicts.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initiliazing variables
    int shift1,shift2,shift3,shift4,shift5,shift6,shift7;
    int avail1,avail2,avail3,avail4,avail5,avail6,avail7;
    int totalhours = 0;
    int conflict = 0;

    // Day 1
    printf("Enter number of hours in Day 1: ");
    scanf("%d", &shift1);
    printf("Are you available for Day 1 (0 = No, 1 = Yes): ");
    scanf("%d", &avail1);

    if (shift1 > 0 && avail1 == 0) {
        printf("Conflict on Day 1!: Staff not available\n");
        conflict = 1;
    }
    if (shift1 > 8) {
        printf("Conflict on Day 1!: Shift exceeded 8 hours\n");
        conflict = 1;
    }
    totalhours += shift1;

    // Day 2
    printf("Enter number of hours in Day 2: ");
    scanf("%d", &shift2);
    printf("Are you available for Day 2 (0 = No, 1 = Yes): ");
    scanf("%d", &avail2);

    if (shift2 > 0 && avail2 == 0) {
        printf("Conflict on Day 2!: Staff not available\n");
        conflict = 1;
    }
    if (shift2 > 8) {
        printf("Conflict on Day 2!: Shift exceeded 8 hours\n");
        conflict = 1;
    }
    totalhours += shift2;

    // Day 3
    printf("Enter number of hours in Day 3: ");
    scanf("%d", &shift3);
    printf("Are you available for Day 3 (0 = No, 1 = Yes): ");
    scanf("%d", &avail3);

    if (shift3 > 0 && avail3 == 0) {
        printf("Conflict on Day 3!: Staff not available\n");
        conflict = 1;
    }
    if (shift3 > 8) {
        printf("Conflict on Day 3!: Shift exceeded 8 hours\n");
        conflict = 1;
    }
    totalhours += shift3;

    // Day 4
    printf("Enter number of hours in Day 4: ");
    scanf("%d", &shift4);
    printf("Are you available for Day 4 (0 = No, 1 = Yes): ");
    scanf("%d", &avail4);

    if (shift4 > 0 && avail4 == 0) {
        printf("Conflict on Day 4!: Staff not available\n");
        conflict = 1;
    }
    if (shift4 > 8) {
        printf("Conflict on Day 4!: Shift exceeded 8 hours\n");
        conflict = 1;
    }
    totalhours += shift4;

    // Day 5
    printf("Enter number of hours in Day 5: ");
    scanf("%d", &shift5);
    printf("Are you available for Day 5 (0 = No, 1 = Yes): ");
    scanf("%d", &avail5);

    if (shift5 > 0 && avail5 == 0) {
        printf("Conflict on Day 5!: Staff not available\n");
        conflict = 1;
    }
    if (shift5 > 8) {
        printf("Conflict on Day 5!: Shift exceeded 8 hours\n");
        conflict = 1;
    }
    totalhours += shift5;

    // Day 6
    printf("Enter number of hours in Day 6: ");
    scanf("%d", &shift6);
    printf("Are you available for Day 6 (0 = No, 1 = Yes): ");
    scanf("%d", &avail6);

    if (shift6 > 0 && avail6 == 0) {
        printf("Conflict on Day 6!: Staff not available\n");
        conflict = 1;
    }
    if (shift6 > 8) {
        printf("Conflict on Day 6!: Shift exceeded 8 hours\n");
        conflict = 1;
    }
    totalhours += shift6;

    // Day 7
    printf("Enter number of hours in Day 7: ");
    scanf("%d", &shift7);
    printf("Are you available for Day 7 (0 = No, 1 = Yes): ");
    scanf("%d", &avail7);

    if (shift7 > 0 && avail7 == 0) {
        printf("Conflict on Day 7!: Staff not available\n");
        conflict = 1;
    }
    if (shift7 > 8) {
        printf("Conflict on Day 7!: Shift exceeded 8 hours\n");
        conflict = 1;
    }
    totalhours += shift7;

    // Weekly hours check
    if (totalhours > 40) {
        printf("Conflict: Weekly hours exceeded 40!\n");
        conflict = 1;
    }

    // Final Summary
    printf("-------------Summary-------------\n");
    printf("Total hours worked: %d\n", totalhours);

    if (conflict == 0)
     {
        printf("No conflict found! Schedule is valid.\n");
    } 
    else 
    {
        printf("Schedule has conflicts. Please review.\n");
    }

    system("pause");
    return 0;
}  
