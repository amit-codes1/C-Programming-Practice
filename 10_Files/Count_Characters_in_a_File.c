#include <stdio.h>
#include <string.h>
// Write a program that counts the total number of characters present in message.txt.

int main()
{

    FILE *ptr;

    ptr = fopen("message.txt", "r");

    if (ptr == NULL)
    {
        printf("File doesn't exist.");
        return 1;
    }

    int count = 0;

    int ch;

    while ((ch = fgetc(ptr)) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            count++;
        }
        }

    fclose(ptr);

    printf("Total number of characters in the file: %d", count);

    return 0;
}