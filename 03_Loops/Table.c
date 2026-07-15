#include <stdio.h>

int main()
{
    // Table Printer - Input taken from user.

    int a;
    int i = 1;

    printf("Enter the number: ");
    scanf("%d", &a);

    while (i < 11)
    {
        printf("%d X %d = %d \n", a, i, i * a);
        i++;
    }
    return 0;
}