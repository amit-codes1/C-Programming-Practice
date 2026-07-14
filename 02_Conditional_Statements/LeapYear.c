#include <stdio.h>

int main()
{
    /*
    Rules:

Divisible by 400 → Leap Year
Divisible by 100 → Not Leap Year
Divisible by 4 → Leap Year
Otherwise → Not Leap Year*/

    int a;

    printf("Enter year: ");
    scanf("%d", &a);

    if (a % 400 == 0)
        printf("%d is a Leap Year", a);

    else if (a % 100 == 0)
        printf("%d is not a Leap Year", a);

    else if (a % 4 == 0)
        printf("%d is a Leap Year", a);

    else
        printf("%d is not a Leap Year", a);

    return 0;
}