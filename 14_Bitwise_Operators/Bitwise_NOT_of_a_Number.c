#include <stdio.h>
/*
Write a program that:

Reads an integer.
Prints the result of the Bitwise NOT (~) operator.
*/

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Result according to Bitwise NOT(~): %d", ~num);

    return 0;
}