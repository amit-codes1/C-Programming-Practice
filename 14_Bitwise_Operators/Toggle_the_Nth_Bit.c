#include <stdio.h>
/*
Write a program that:

Takes an integer and a bit position n (0-based indexing).
Toggles (flips) the nth bit.
If the bit is 1, make it 0.
If the bit is 0, make it 1.
Print the new number.

Example:

Input:
Number = 10
Position = 1

Output:
8
*/

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    int n;

    printf("Enter Bit Position to Toggle: ");
    scanf("%d", &n);

    int toggle = 1 << n;

    int result = num ^ toggle;

    printf("After toggling the Bit at %d position the new number is: %d", n, result);

    return 0;
}