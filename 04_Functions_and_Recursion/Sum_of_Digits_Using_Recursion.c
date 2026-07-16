#include <stdio.h>
/*
Write a recursive function that returns the sum of the digits of a number.

Example:

Input:
5831
Output:
5+8+3+1 = 17    */

int sum(int, int);

int sum(int num, int digit)
{

    if (num == 0)
        return digit;

    int check = num % 10;
    digit = digit + check;

    return sum(num / 10, digit);
}
int main()
{

    int num, original;

    printf("Enter number: ");
    scanf("%d", &num);

    original = num;

    printf("The sum of the digits in %d is: %d", original, sum(num, 0));

    return 0;
}