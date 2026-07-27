#include <stdio.h>

#define SWAP(x, y) \
    do             \
    {              \
int temp = (x);    \
(x) = (y);         \
(y) = temp;        \
} while (0)

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n--- Before Swapping ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    SWAP(a, b);

    printf("\n--- After Swapping ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}