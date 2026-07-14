#include <stdio.h>

int main()
{
    int a, total = 1;

    printf("Enter the number for factorial: ");
    scanf("%d", &a);

    for (int i = 1; i < a + 1; i++)
        total = total * i;

    printf("The factorial of %d is: %d \n", a, total);

    return 0;
}