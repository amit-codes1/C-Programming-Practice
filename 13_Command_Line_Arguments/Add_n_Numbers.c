#include <stdio.h>
#include <stdlib.h>
/*
Write a program that accepts n number of integers through command line arguments and displays their sum.*/

int main(int argc, char **argv)
{

    int num = 0;
    int sum = 0;

    for (int i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);
        sum = sum + num;
    }

    printf("Sum of n numbers are: %d", sum);

    return 0;
}