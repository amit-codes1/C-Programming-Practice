#include <stdio.h>

// A function power(int base, int exponent) that returns the value of base<sup>exponent</sup>.

int power(int, int);

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i < exponent + 1; i++)
        result = result * base;

    return result;
}
int main()
{
    int base, exponent;

    printf("Enter base value: ");
    scanf("%d", &base);

    printf("Enter exponent value: ");
    scanf("%d", &exponent);

    printf("%d to the power %d is %d ", exponent, base, power(base, exponent));

    return 0;
}