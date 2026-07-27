#include <stdio.h>
#define SQUARE(x) x *x
/*
Create a macro named SQUARE(x) that returns the square of a number.

Take an integer from the user and print its square using the macro.
*/

int main()
{

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Square of %d is: %d", num, SQUARE(num));

    return 0;
}