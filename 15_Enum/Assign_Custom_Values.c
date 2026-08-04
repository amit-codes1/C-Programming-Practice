#include <stdio.h>

int main()
{

    enum Day
    {
        MONDAY = 1,
        TUESDAY = 5,
        WEDNESDAY = 9,
        THURSDAY = 11,
        FRIDAY = 0,
        SATURDAY = -2,
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