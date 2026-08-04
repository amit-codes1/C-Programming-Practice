#include <stdio.h>
/*
Using the Day enum, ask the user to enter a number (1-7).

Convert it to an enum variable and use a switch statement to print the corresponding day name.*/

int main()
{

    enum Day
    {
        MONDAY = 1,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY
    };

    int num;

    printf("Enter a Number to Print a Day from 1-7:  ");
    scanf("%d", &num);

    enum Day today = num;

    switch (today)
    {
    case MONDAY:
        printf("MONDAY");
        break;

    case TUESDAY:
        printf("TUESDAY");
        break;

    case WEDNESDAY:
        printf("WEDNESDAY");
        break;

    case THURSDAY:
        printf("THURSDAY");
        break;

    case FRIDAY:
        printf("FRIDAY");
        break;

    case SATURDAY:
        printf("SATURDAY");
        break;

    case SUNDAY:
        printf("SUNDAY");
        break;
    }
    
    return 0;
}