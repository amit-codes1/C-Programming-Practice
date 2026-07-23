#include <stdio.h>
#include <string.h>
/*
Read all integers from numbers.txt and calculate:

Sum
Count
Average
*/

int main()
{

    FILE *ptr;

    ptr = fopen("numbers.txt", "r");

    if (ptr == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    int count = 0;
    int sum = 0;
    int num;

    while (fscanf(ptr, "%d", &num) == 1)
    {
        count++;
        sum = sum + num;
    }

    printf("Sum of all the numbers in the file is: %d \n", sum);
    printf("Total number of digits in the file is: %d \n", count);

    float sum_1 = sum;
    float count_1 = count;
    float avg = sum_1 / count_1;

    printf("Average of all the numbers in the file is : %.2f", avg);

    return 0;
}