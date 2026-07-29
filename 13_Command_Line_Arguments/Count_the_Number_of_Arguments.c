#include <stdio.h>
/*
Write a program that displays the total number of command line arguments entered excluding the program name.

Example:

Input:
program.exe A B C D

Output:
Number of arguments = 4
*/

int main(int argc, char **argv)
{

    int count = argc - 1;

    printf("Total Number of Command Line Arguments are %d (excluding program name) \n", count);

    return 0;
}