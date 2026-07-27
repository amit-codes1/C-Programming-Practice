#include <stdio.h>
/*
Create macros for:

Addition
Subtraction
Multiplication
Division

Take two numbers from the user and print all four results using the macros.
*/

#define ADD(x, y) x + y
#define SUBTRACTION(x, y) x - y
#define MULTIPLICATION(x, y) x *y
#define DIV(x, y) x / y

int main()
{

    float a, b;

    printf("Enter a Number: ");
    scanf("%.2f", &a);

    printf("Enter another Number: ");
    scanf("%.2f", &b);

    printf("Sum of %.2f and %.2f is: %.2f \n", a, b, ADD(a, b));
    printf("Subtraction of %.2f and %.2f is: %.2f \n", a, b, SUBTRACTION(a, b));
    printf("Multiplication of %.2f and %.2f is: %.2f \n", a, b, MULTIPLICATION(a, b));
    printf("Division of %.2f and %.2f is: %.2f \n", a, b, DIV(a, b));

    return 0;
}