#include <stdio.h>

int main()
{
     int n;
     printf("Enter the value of N: ");
     scanf("%d", &n);

     printf("Prime numbers between 1 and %d are:\n", n);

     for (int i = 2; i <= n; i++)
     {
          int prime = 1;
          for (int j = 2; j < i && prime; j++)
               if (i % j == 0)
                    prime = 0;

          if (prime)
               printf("%d ", i);
     }

     return 0;
}