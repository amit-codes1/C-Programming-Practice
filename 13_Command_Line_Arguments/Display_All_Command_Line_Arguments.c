#include <stdio.h>
#include <stdlib.h>
/*
Write a C program that accepts command line arguments and prints each argument on a new line.

Example:

Input:
Display_All_Command_Line_Arguments.exe Apple Mango Orange
*/

int main(int argc, char **argv)
{

    printf("Enter Arguments: \n");

    for (int i = 0; i < argc; i++)
    {
        printf("Argument [%d]: %s \n", i, argv[i]);
    }

    return 0;
}