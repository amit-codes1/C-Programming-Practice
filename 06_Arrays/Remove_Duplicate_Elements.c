#include <stdio.h>

/*
Input 10 integers into an array.
Print only the unique elements.
*/

int main()
{
    int arr[10];

    printf("Enter 10 elements: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Unique elements: ");

    for (int i = 0; i < 10; i++)
    {
        int isUnique = 1;

        for (int j = 0; j < 10; j++)
            if (i != j && arr[i] == arr[j])
                isUnique = 0;

        if (isUnique)
            printf("%d ", arr[i]);
    }

    return 0;
}