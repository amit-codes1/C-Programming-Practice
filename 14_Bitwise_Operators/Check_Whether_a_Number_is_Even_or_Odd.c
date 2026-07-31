#include <stdio.h>
/*
Write a program that:

Reads an integer.
Determines whether it is Even or Odd using only the Bitwise AND (&) operator.
*/

int main()
{

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    if ((num & 1) == 0)
    {
        printf("%d is Even Number!!", num);
    }

    else
    {
        printf("%d is Odd Number!!", num);
    }

    return 0;
}