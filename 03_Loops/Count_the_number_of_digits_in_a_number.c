#include <stdio.h>

int main()
{
    int num, value, count = 0;

    printf("Enter number to count digits: ");
    scanf("%d", &num);

    value = num;

    if (num == 0)
        count = 1;

    while (num != 0)
    {
        // remove last digit
        num = num / 10;

        // increase count
        count++;
    }

    printf("Total digits count in %d is:%d ",value, count);

    return 0;
}