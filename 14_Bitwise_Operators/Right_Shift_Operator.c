#include <stdio.h>
/*
Write a program that:

Takes an integer and a number of positions.
Right shifts the integer and prints the result.
*/

int main()
{

    int num;
    int shift;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter number of positions you want to Shift: ");
    scanf("%d", &shift);

    printf("Result after shifting %d by %d positions: %d", num, shift, num >> shift);

    return 0;
}