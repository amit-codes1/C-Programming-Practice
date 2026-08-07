#include <stdio.h>
/*
Create a typedef named Decimal for float.

Input the length and width of a rectangle.
Calculate and print its area.
*/

int main()
{

    typedef float Decimal;

    Decimal length;
    Decimal width;

    printf("Enter Length of Rectangle:  ");
    scanf("%f", &length);

    printf("Enter Width of Rectangle:  ");
    scanf("%f", &width);

    printf("Area of Rectangle: %.5f", length * width);

    return 0;
}