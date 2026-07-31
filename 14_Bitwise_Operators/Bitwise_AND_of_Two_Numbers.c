#include <stdio.h>
/*
Write a program that:

Takes two integers as input.
Prints the result of their Bitwise AND (&).
*/

int main()
{

    int num, num_1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter another Number: ");
    scanf("%d", &num_1);

    printf("Result according to Bitwise AND(&): %d", num & num_1);

    return 0;
}