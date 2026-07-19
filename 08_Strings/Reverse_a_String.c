#include <stdio.h>
#include <string.h>

int main()
{

    char str[25];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    printf("Reverse string: ");

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}