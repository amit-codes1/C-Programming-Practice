#include <stdio.h>
#include <string.h>
/*
Take 5 integers from the user and store them in a file named numbers.txt, one number per line.
*/

int main()
{

    FILE *ptr;

    ptr = fopen("numbers.txt", "a");

    char num[50];

    printf("Enter five numbers to store in Files: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        fgets(num, sizeof(num), stdin);
        fputs(num, ptr);
    }

    fclose(ptr);

    return 0;
}