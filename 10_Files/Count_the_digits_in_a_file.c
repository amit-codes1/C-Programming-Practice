#include <stdio.h>
#include <string.h>
/*
Ask the user to enter 10 integers and store them in digits.txt (one per line).

Then open the same file in read mode and count how many integers are stored.
*/

// Inserting Digits into the file:

int main()
{

    FILE *ptr;

    ptr = fopen("digits.txt", "w");

    if (ptr == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    int num[10];

    printf("--- Enter 10 digits to insert in the file --- \n");

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &num[i]);
        fprintf(ptr, "%d \n", num[i]);
    }

    fclose(ptr);

    // Reading the File:

    ptr = fopen("digits.txt", "r");

    if (ptr == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    int value;
    int count = 0;

    while (fscanf(ptr, "%d", &value) == 1)
    {
        count++;
    }

    fclose(ptr);

    printf("Total number of digits in the file: %d", count);

    return 0;
}