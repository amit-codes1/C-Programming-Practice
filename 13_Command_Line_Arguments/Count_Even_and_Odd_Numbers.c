#include <stdio.h>
#include <stdlib.h>
/*
Write a C program that accepts any number of integers through command line arguments and counts how many are even and how many are odd.
*/

int main(int argc, char **argv)
{

    int countEven = 0;
    int countOdd = 0;
    int num = 0;

    if (argc == 1)
    {
        printf("No Integers Provided \n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);

        if (num % 2 == 0 || num == 0)
        {
            countEven++;
        }

        else
            countOdd++;
    }

    printf("Total Count of Even Numbers are: %d \n", countEven);
    printf("Total Count of Odd Numbers are: %d", countOdd);

    return 0;
}