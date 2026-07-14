#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the number to check: ");
    scanf("%d", &a);

    printf("Enter the number to check: ");
    scanf("%d", &b);

    printf("Enter the number to check: ");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("%d is Greatest.", a);

    else if (b > a && b > c)
        printf("%d is Greatest.", b);

    else if (c > a && c > b)
        printf("%d is Greatest.", c);

    else
        printf("All are equal.");

    return 0;
}