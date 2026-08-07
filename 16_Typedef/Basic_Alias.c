#include <stdio.h>
/*
Create a typedef named Integer for the int data type.

Declare two variables using Integer.
Take input from the user.
Print their sum.
*/

int main()
{

    typedef int Integer;

    Integer a = 0;
    Integer b = 0;

    printf("Enter a Number:  ");
    scanf("%d", &a);

    printf("Enter another Number: ");
    scanf("%d", &b);

    printf("Sum of %d and %d is:  %d", a, b, a + b);

    return 0;
}