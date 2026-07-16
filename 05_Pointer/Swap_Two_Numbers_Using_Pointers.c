#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    int *ptr = &a;
    int *ptr_1 = &b;

    int swap = *ptr;
    *ptr = *ptr_1;
    *ptr_1 = swap;

    printf("After swapping the numbers: \n");

    printf("First number: %d \n", a);
    printf("Second number: %d \n", b);
    return 0;
}