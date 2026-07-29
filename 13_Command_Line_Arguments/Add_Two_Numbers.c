#include <stdio.h>
#include <stdlib.h>
/*
Write a program that accepts two integers through command line arguments and displays their sum.

Example:

Input:
sum.exe 25 15

Output:
Sum = 40
*/

int main(int argc, char **argv)
{

    int num = atoi(argv[1]);
    int num_1 = atoi(argv[2]);

    int sum = num + num_1;

    printf("Sum of the two integers are: %d", sum);

    return 0;
}