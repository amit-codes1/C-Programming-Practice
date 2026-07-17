#include <stdio.h>

/*
Assume an array of 10 integers is already sorted in ascending order.

Take another integer from the user and determine at which index it should be inserted to keep the array sorted.
*/

int main()
{

    int arr[10] = {1, 2, 4, 6, 8, 10, 15, 18, 20, 25};
    int num;

    printf("Enter an number: ");
    scanf("%d", &num);

    int digit = 0;
    int index = 0;

    for (int i = 0; i < 11; i++)
    {
        if (arr[i] > num)
        {
            digit = arr[i];
            index = i;
            break;
        }
        else if (arr[i] < num)
        {
            digit = arr[10];
            index = i;
        }
        else
        {
            digit = arr[0];
            index = i;
        }
    }

    printf("We need to insert element at index: %d", index);
    return 0;
}