#include <stdio.h>
#include <string.h>
// Write a program that asks the user to enter a sentence and stores it in a file named message.txt.

int main()
{

    FILE *ptr;

    ptr = fopen("message.txt", "w");

    if (ptr == NULL)
    {
        printf("File doesn't exist.");
        return 1;
    }

    char str[50];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, ptr);
    fputs("\n", ptr);

    fclose(ptr);

    return 0;
}