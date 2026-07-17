#include <stdio.h>

int main()
{

    int arr[10];

    printf("Enter 10 elements to check the Largest: ");

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i <= 9; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("The largest element in Array is: %d", max);

    return 0;
}