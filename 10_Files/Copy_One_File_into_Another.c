#include <stdio.h>
#include <string.h>
/*
Copy the contents of message.txt into another file named copy.txt.
*/

int main()
{

    FILE *ptr;
    FILE *ptr_1;

    ptr = fopen("message.txt", "r");
    ptr_1 = fopen("copy.txt", "w");

    if (ptr == NULL)
    {
        printf("File doesn't exist.");
        return 1;
    }

    if (ptr_1 == NULL)
    {
        printf("File doesn't exist.");
        return 1;
    }

    char str[50];

    while (fgets(str, 50, ptr) != NULL)
    {
        fputs(str, ptr_1);
    }

    fclose(ptr);
    fclose(ptr_1);

    printf("File copied successfully. \n");

    return 0;
}