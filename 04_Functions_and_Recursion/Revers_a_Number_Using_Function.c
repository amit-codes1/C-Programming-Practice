#include <stdio.h>

int reverse(int);

int reverse(int num)
{

    int rev = 0, check;

    while (num != 0)
    {

        check = num % 10;
        rev = rev * 10 + check;
        num = num / 10;
    }
    return rev;
}

int main()
{

    int num, original;

    printf("Enter number to print reverse: ");
    scanf("%d", &num);

    original = num;

    printf("The reverse of %d is %d", original, reverse(num));

    return 0;
}