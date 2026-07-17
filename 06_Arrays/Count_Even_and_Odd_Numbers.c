#include <stdio.h>

int main()
{

    int arr[10];

    printf("Enter 10 elements to check Even and Odd: ");

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    int even = 0, odd = 0;

    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] % 2 == 0)
            even++;

        else
            odd++;
    }

    printf("Total number of even and odd are %d and %d respectively.", even, odd);

    return 0;
}