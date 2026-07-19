#include <stdio.h>

int main()
{

    char st[20];

    printf("Enter string: ");
    fgets(st, sizeof(st), stdin);

    int lower = 0, upper = 0;

    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] >= 'A' && st[i] <= 'Z')
            upper++;

        else if (st[i] >= 'a' && st[i] <= 'z')
            lower++;
    }
    printf("No.of Uppercase letters: %d \n", upper);
    printf("No.of Lowercase letters: %d", lower);

    return 0;
}