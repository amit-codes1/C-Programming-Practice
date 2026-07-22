#include <stdio.h>
#include <string.h>
// Read all the integers from numbers.txt and calculate their sum.

int main()
{

    FILE *ptr;

    ptr = fopen("numbers.txt", "r");

    if (ptr == NULL)
    {
        printf("File doesn't exist.");
        return 1;
    }

    int sum = 0;
    int num;

    while (fscanf(ptr, "%d", &num) == 1)
    {
        sum = sum + num;
    }

    fclose(ptr);

    printf("Sum of all the integers in the file: %d", sum);

    return 0;
}