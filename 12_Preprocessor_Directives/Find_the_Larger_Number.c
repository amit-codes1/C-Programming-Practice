#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

/*
Create a macro:

MAX(a, b)

that returns the larger of two numbers.

Take two integers from the user and print the larger one.
*/

int main()
{
    int a, b;

    printf("Enter Number: ");
    scanf("%d", &a);

    printf("Enter Number: ");
    scanf("%d", &b);

    printf("The largest number is: %d", MAX(a, b));

    return 0;
}
