#include <stdio.h>

/*
Write a function:

int larger(int *a, int *b);

that returns the larger of two numbers using pointers.
*/

int larger(int a, int b);

int larger(int a, int b)
{

    int *ptr = &a;
    int *ptr_1 = &b;

    if (*ptr > *ptr_1)
        return *ptr;

    else
        return *ptr_1;
}

int main()
{

    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Please enter distinct values.");
        return 0;
    }

    printf("The larger of two numbers is: %d", larger(a, b));

    return 0;
}