#include <stdio.h>

int main()
{

    char length[20];

    printf("Enter a string: ");
    fgets(length, sizeof(length), stdin);

    int count = 0;

    for (int i = 0; length[i] != '\0'; i++)
    {
        count++;
    }

    printf("The length of the string is %d", count-1);

    return 0;
}