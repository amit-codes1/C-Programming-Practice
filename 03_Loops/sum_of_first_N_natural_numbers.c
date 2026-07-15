#include <stdio.h>

int main()
{
    int N, sum = 0;

    printf("Enter the number for sum: ");
    scanf("%d", &N);

    for (int i = 0; i < N + 1; i++)
    {
        sum = sum + i;
    }

    printf("Sum upto %d is: %d", N, sum);

    return 0;
}