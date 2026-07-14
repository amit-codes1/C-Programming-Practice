#include <stdio.h>

int main()
{
    int a;

    printf("Enter number to check: ");
    scanf("%d", &a);

    if (a > 0)
        printf("The entered number is positive");

    else if (a < 0)
        printf("Entered number is negative");

    else
        printf("Entered number is Zero");

    return 0;
}