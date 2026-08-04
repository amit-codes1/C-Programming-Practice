#include <stdio.h>
/*
Using the Day enum, print all the days using a loop.

Expected Output:

0 -> MONDAY
1 -> TUESDAY
...
6 -> SUNDAY
*/

int main()
{
    enum Day
    {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY
    };

    for (int i = 0; i < 7; i++)
    {
        enum Day today = i;

        switch (today)
        {
        case MONDAY:
            printf("0 -> MONDAY \n");
            break;

        case TUESDAY:
            printf("1 -> TUESDAY \n");
            break;

        case WEDNESDAY:
            printf("2 -> WEDNESDAY \n");
            break;

        case THURSDAY:
            printf("3 -> THURSDAY \n");
            break;

        case FRIDAY:
            printf("4 -> FRIDAY \n");
            break;

        case SATURDAY:
            printf("5 -> SATURDAY \n");
            break;

        case SUNDAY:
            printf("6 -> SUNDAY \n");
            break;
        }
    }

    return 0;
}