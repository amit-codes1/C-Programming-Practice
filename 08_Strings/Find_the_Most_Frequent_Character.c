#include <stdio.h>
#include <string.h>

/*
A program to find the character that appears the maximum number of times in a string.
*/

int main()
{

    char str[300];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    int max = 0;
    char maxchar = str[0];

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
            if (count > max)
            {
                max = count;
                maxchar = str[i];
            }
        }
    }

    printf("Most frequent character: '%c' (appears %d times)", maxchar, max);

    return 0;
}