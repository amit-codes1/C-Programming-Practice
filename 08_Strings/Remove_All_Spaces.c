#include <stdio.h>
#include <string.h>

int main()
{

    char str[300];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    char str_1[300];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str_1[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("String after removing the spaces: %s", str_1);

    return 0;
}