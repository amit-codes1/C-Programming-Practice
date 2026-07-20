#include <stdio.h>
#include <string.h>

/*
Program to find the first character in a string that appears only once.

If every character repeats, print an appropriate message.

Example 1:

Input:
aabbcdde

Output:
First non-repeating character = c

Example 2:

Input:
aabbcc

Output:
No non-repeating character found
*/

int main()
{
    char str[500];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    int found = 0;
    char lowestchar = '\0';

    for (int i = 0; str[i] != '\0' && !found; i++)
    {
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            lowestchar = str[i];
            found = 1;
        }
    }

    if (found)
        printf("First Non-Repeating Letter in the String is: '%c'\n", lowestchar);
    else
        printf("No Non-Repeating Letter found in the string\n");

    return 0;
}