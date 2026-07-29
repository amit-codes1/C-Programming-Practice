#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    float num = 0;
    float sum = 0;

    for (int i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);
        sum = sum + num;
    }

    float avg = sum / (argc - 1);

    printf("Average of the numbers are: %.2f", avg);

    return 0;
}