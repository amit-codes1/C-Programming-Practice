#include <stdio.h>

int main()
{

    char str[200];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    int max = 0, secondmax = 0;
    char str_1 = '\0';
    char str_2 = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            secondmax = max;
            max = count;

            str_2 = str_1;
            str_1 = str[i];
        }
        else if (count > secondmax && count < max)
        {
            secondmax = count;
            str_2 = str[i];
        }
    }

    printf("The second most frequent character is: '%c' (frequency: %d)", str_2, secondmax);

    return 0;
}