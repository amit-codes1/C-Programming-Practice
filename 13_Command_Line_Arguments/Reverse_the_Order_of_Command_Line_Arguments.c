#include <stdio.h>
/*
Write a C program that accepts multiple command line arguments and displays them in reverse order.

Example:
Input:
reverse.exe Apple Mango Banana Orange

Output:
Orange
Banana
Mango
Apple

*/

int main(int argc, char **argv)
{

    printf("In reverse Order: \n");

    for (int i = argc-1; i > 0; i--)
    {
        printf("%s \n", argv[i]);
    }

    return 0;
}