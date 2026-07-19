#include <stdio.h>
#include <string.h>

int main()
{

    char str[300];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("Total number of words in the String is: %d", count + 1);

    return 0;
}