#include <stdio.h>
#include <string.h>

int main()
{

    char vowels[20];

    printf("Enter string to check number of vowels: ");
    fgets(vowels, sizeof(vowels), stdin);

    int count = 0;
    char check[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};

    for (int i = 0; vowels[i] != '\0'; i++)
    {
        if (strchr(check, vowels[i]) != NULL)
            count++;
    }

    printf("The total number of vowels in the string is: %d", count);

    return 0;
}