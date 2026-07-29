#include <stdio.h>
#include <stdlib.h>
/*
Write a program that accepts n integers through command line arguments and prints the larger number.

Example:

Input:
largest.exe 12 30

Output:
Largest = 30
*/

int main(int argc, char **argv)
{

    int largest = 0;
    int num = 0;

    for (int i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);

        if (num > largest)
        {
            largest = num;
        }
    }

    printf("The greatest Number entered by user is: %d", largest);

    return 0;
}