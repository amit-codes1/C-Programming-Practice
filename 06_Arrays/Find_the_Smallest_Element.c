#include <stdio.h>

int main()
{

    int arr[10];

    printf("Enter 10 elememts to check the smallest: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    printf("The smallest element in the array is:%d ", min);

    return 0;
}