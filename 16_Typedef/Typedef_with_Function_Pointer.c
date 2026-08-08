#include <stdio.h>
/*
Create a function that adds two integers.

Create a typedef for a function pointer that matches this function.

Use the function pointer to call the function and print the result.
*/

typedef int (*operation)(int, int);

int add(int a, int b)
{
    return a + b;
}
int main()
{
    operation opt = add;

    int a = 0;

    printf("Enter Number: ");
    scanf("%d", &a);

    int b = 0;

    printf("Enter another Number: ");
    scanf("%d", &b);

    printf("Sum of %d and %d is: %d", a, b, opt(a, b));

    return 0;
}