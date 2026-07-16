#include <stdio.h>

// Function square(int n) that returns the square of a number.

int square(int);

int square(int n)
{
    return n * n;
}

int main()
{
    int n;
    printf("Enter number to print sqaure: ");
    scanf("%d", &n);

    printf("The square of %d is %d ", n, square(n));

    return 0;
}