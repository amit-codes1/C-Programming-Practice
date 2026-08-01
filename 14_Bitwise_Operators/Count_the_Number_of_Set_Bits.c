#include <stdio.h>
/*
Write a program that:

Reads an integer.
Counts how many bits are 1 in its binary representation using bitwise operators.

Example:

Input:
13

Binary:
1101

Output:
3
*/

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    unsigned int(u) = (unsigned int)num;
    int count = 0;

    while (u != 0)
    {
        if ((u & 1) == 1)
        {
            count++;
        }

        u = u >> 1;
    }

    printf("The Count of bits 1 in %d is %d",num, count);

    return 0;
}
