#include <stdio.h>

int main()
{
    int a, b;
    char s;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    printf("Choose '+' , '-', '*', '/' to perform Sum, Difference, Product and Division respectively \n");
    printf("Enter symbol to perform mathematical function:");
    scanf(" %c", &s);

    if (s != '+' || s != '-' || s != '*' || s != '/')
        printf("Enter a valid operator");

    else if (s == '+')
        printf("The sum of %d and %d is %d", a, b, a + b);

    else if (s == '-')
        printf("The Difference of %d and %d is %d", a, b, a - b);

    else if (s == '*')
        printf("The Product of %d and %d is %d", a, b, a * b);

    if (b == 0)
        printf("Division by zero is not possible.");

    else if (s == '/')
        printf("The division of %d and %d is %d", a, b, a / b);

    return 0;
}