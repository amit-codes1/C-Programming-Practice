#include <stdio.h>
/*
Write a program that converts temperature.

If CELSIUS_TO_FAHRENHEIT is defined, convert Celsius to Fahrenheit.
Otherwise convert Fahrenheit to Celsius.
*/

#define CELSIUS_TO_FAHRENHEIT

int main()
{

    float temp;

    printf("Enter Temperature: ");
    scanf("%f", &temp);

    float Celsius_to_Fahrenheit = (temp * 9 / 5) + 32;
    float Fahrenheit_to_Celsius = (temp - 32) * (5 / 9);

#ifdef CELSIUS_TO_FAHRENHEIT
    printf("%.2f degree Celsius to Fahrenheit: %.2f",temp, Celsius_to_Fahrenheit);

#else
    printf("%.2f degree Fahrenheit to Celsius: %.2f",temp, Fahrenheit_to_Celsius);

#endif

    return 0;
}