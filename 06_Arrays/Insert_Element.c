#include <stdio.h>

/*Assume an array of 10 integers is already sorted in ascending order.

Take another integer from the user and insert the element to keep the array sorted.
*/

int main()
{
    int arr[11] = {1, 2, 4, 6, 8, 10, 15, 18, 20, 25};
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int index = 10;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > num)
        {
            index = i;
            break;
        }
    }

    for (int i = 9; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = num;

    printf("Array after insertion: ");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}