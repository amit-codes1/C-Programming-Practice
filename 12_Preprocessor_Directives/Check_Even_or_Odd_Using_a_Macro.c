#include <stdio.h>
/*
Create a macro:

IS_EVEN(x)

Take an integer from the user.

If it is even, print:

Even Number

Otherwise print:

Odd Number
*/

#define IS_EVEN(x) (x % 2 == 0 ? "Even Number." : "Odd Number.")

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("%d is %s", num, IS_EVEN(num));

    return 0;
}