#include <stdio.h>

// Function max(int a, int b) that returns the larger of two numbers.

int max(int, int);

int max(int a, int b)
{
    if (a > b)
        return a;

    else
        return b;
}
int main()
{

    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("The greatest of both is: %d", max(a, b));

    return 0;
}