#include <stdio.h>

int main()
{
    int num, rev = 0, digit;

    printf("Enter number to reverse: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    printf("Reverse: %d", rev);

    return 0;
}