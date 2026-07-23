#include <stdio.h>
#include <string.h>
/*
Take a String from user and save it to a file named info.txt.

Create another file named letters.txt that contains only alphabetic characters.

Suppose info.txt contains:
Hello123!! C Language2026

Output file:
Hello C Language(only space included).
*/

int main()
{

    FILE *ptr;

    ptr = fopen("info.txt", "w");

    if (ptr == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, ptr);

    fclose(ptr);

    // Reading only alphabates and copying it to another file:

    FILE *ptr_1;

    ptr = fopen("info.txt", "r");
    ptr_1 = fopen("letters.txt", "w");

    if (ptr == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    if (ptr_1 == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    char ch;
    char str_1[100];

    int j = 0;

    while ((ch = fgetc(ptr)) != EOF && j < 100)
    {
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        {
            str_1[j] = ch;
            j++;
        }

        else if (ch == ' ')
        {
            str_1[j] = ch;
            j++;
        }
    }
    str_1[j] = '\0';

    fputs(str_1,ptr_1);

    printf("--- String with only alphabates ---- \n");
    printf("\t  %s", str_1);

    fclose(ptr);
    fclose(ptr_1);

    return 0;
}