#include <stdio.h>
#include <string.h>

/*
Write a program that opens message.txt and displays its contents on the screen.
*/

int main()
{

    FILE *fp;

    fp = fopen("message.txt", "r");

    if (fp == NULL)
    {
        printf("File doesn't exist.");
        return 1;
    }

    char str[50];

    while (fgets(str, 50, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}