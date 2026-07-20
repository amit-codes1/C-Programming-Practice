#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str[300];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    char str_1[300];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            char lower = toupper(str[i]);
            str_1[j] = lower;
            j++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char upper = tolower(str[i]);
            str_1[j] = upper;
            j++;
        }
    }
    str_1[j] = '\0';

    printf("String after toggling every letter: %s \t", str_1);

    return 0;
}