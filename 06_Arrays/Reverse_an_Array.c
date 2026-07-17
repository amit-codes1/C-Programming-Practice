#include <stdio.h>

/*
Input 10 integers into an array.
Print the elements in reverse order.
*/

int main()
{

    int arr[10];

    printf("Enter 10 elements in array: ");

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d,  ", arr[i]);
    }

    return 0;
}