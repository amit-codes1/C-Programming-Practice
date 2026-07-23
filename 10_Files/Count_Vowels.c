#include <stdio.h>
#include <string.h>
/*
Read the contents of message.txt and count how many vowels (a, e, i, o, u) are present.
*/

int main()
{

    FILE *ptr;

    ptr = fopen("message.txt", "r");

    if (ptr == NULL)
    {
        printf("File does not exist!");
        return 1;
    }

    char vowel[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};
    char ch;

    int count = 0;

    while ((ch = fgetc(ptr)) != EOF)
    {

        for (int i = 0; vowel[i] != '\0'; i++)
        {
            if (ch == vowel[i])
            {
                count++;
            }
        }
    }

    printf("Total number of Vowels in the File is: %d", count);

    return 0;
}