#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Ask the user to enter a sentence and save it.

Now reopen the file and display every lowercase letter as uppercase.
*/

// Inserting String into the File:

int main()
{

    FILE *ptr;

    ptr = fopen("text.txt", "w");

    if (ptr == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    char str[100];

    printf("---- Type the Sentence: ----\n");
    fgets(str, sizeof(str), stdin);

    fputs(str, ptr);

    fclose(ptr);

    // Converting Lowercase to Uppercase leters:

    ptr = fopen("text.txt", "r");

    if (ptr == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    char str_1[100];
    int ch_1;

    int j = 0;

    while ((ch_1 = fgetc(ptr)) != EOF && j < 99)
    {
        if (islower(ch_1))
            str_1[j] = toupper(ch_1);
        else
            str_1[j] = ch_1;

        j++;
    }

    str_1[j] = '\0';

    printf("---- String after Toggling the Case of the Letters ---- \n");

    printf("%s", str_1);

    fclose(ptr);

    return 0;
}