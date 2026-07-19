#include <stdio.h>
#include <string.h>

int main()
{
    char str[25];

    printf("Enter String: ");
    scanf("%s", str);

    int length = strlen(str);

    char rev[25];
    int j = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    if (strcmp(str, rev) == 0)
    {
        printf("Entered string is Palindrome.");
    }
    else
        printf("Entered string is not Palindrome.");

    return 0;
}