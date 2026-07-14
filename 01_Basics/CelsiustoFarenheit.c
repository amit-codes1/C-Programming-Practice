#include <stdio.h>

int main()
{
     float celsius;

     printf("Enter temp in Celsius: ");
     scanf("%f", &celsius);

     printf("Temp in Fahrenheit: %f", ((9.0 / 5.0) * celsius) + 32);
     return 0;
}