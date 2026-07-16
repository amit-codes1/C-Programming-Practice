#include <stdio.h>

int reverse(int, int);

int reverse(int num, int rev)
{

    if (num == 0)
        return rev;

    int check = num % 10;
    rev = rev * 10 + check;

    return reverse(num / 10, rev);
}

int main()
{

    int num, original;

    printf("Enter number to print reverse: ");
    scanf("%d", &num);

    original = num;

    printf("The reverse of %d is %d", num, reverse(num, 0));

    return 0;
}