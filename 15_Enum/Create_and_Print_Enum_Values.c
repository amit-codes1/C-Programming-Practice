#include <stdio.h>
/*
Create an enum named Day containing:

MONDAY
TUESDAY
WEDNESDAY
THURSDAY
FRIDAY
SATURDAY
SUNDAY

Print the integer value of each day.
*/

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

    printf("%d \n", MONDAY);
    printf("%d \n", TUESDAY);
    printf("%d \n", WEDNESDAY);
    printf("%d \n", THURSDAY);
    printf("%d \n", FRIDAY);
    printf("%d \n", SATURDAY);
    printf("%d \n", SUNDAY);

    return 0;
}