#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    if (a % b == 0)
    {
        printf("The number %d is divsible by %d and the remainder is 0", a, b);
    }
    else
    {
        printf("The number %d is not divisible by %d and the reamainder is %d", a, b, a % b);
    }

    return 0;
}