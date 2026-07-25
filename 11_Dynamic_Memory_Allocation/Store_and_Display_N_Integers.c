#include <stdio.h>
#include <stdlib.h>
/*
Write a program that:

Asks the user for the number of integers (n).
Dynamically allocates memory using malloc().
Takes n integers as input.
Prints all the integers.
Frees the allocated memory.
*/

int main()
{

     int n;

     printf("Enter number of Integers: ");
     scanf("%d", &n);

     int *arr;

     arr = (int *)malloc(n * sizeof(int));

     if (arr == NULL)
     {
          printf("Memory Allocation Failed!!");
          return 1;
     }

     for (int i = 0; i < n; i++)
     {
          printf("Enter Integer: ");
          scanf("%d", &arr[i]);
     }

     printf("---- All Elements Stored in the array are ---- \n");

     for (int i = 0; i < n; i++)
     {
          printf("%d \n", arr[i]);
     }

     free(arr);

     arr = NULL;

     return 0;
}