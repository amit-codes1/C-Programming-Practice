#include <stdio.h>

int main()
{
    int N;

    printf("Enter number to print upto N: ");
    scanf("%d", &N);

    printf("Number upto %d are: \n",N);

    for (int i = 1; i < N + 1; i++)
       printf("%d \n", i);

    return 0;
}