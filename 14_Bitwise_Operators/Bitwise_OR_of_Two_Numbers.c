#include <stdio.h>
/*
Write a program that:

Takes two integers.
Prints the result of their Bitwise OR (|).
*/

int main()
{

    int num, num_1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter another Number: ");
    scanf("%d", &num_1);

    printf("Result according to Bitwise OR(|): %d", num | num_1);

    return 0;
}