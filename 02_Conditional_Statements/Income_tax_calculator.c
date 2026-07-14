#include <stdio.h>

int main()
{
    /*
    Annual Income	Tax Rate
₹0 – ₹2,50,000	No Tax
₹2,50,001 – ₹5,00,000	5% on the amount above ₹2,50,000
₹5,00,001 – ₹10,00,000	₹12,500 + 20% on the amount above ₹5,00,000
Above ₹10,00,000	₹1,12,500 + 30% on the amount above ₹10,00,000*/

    /*
    Additional Rules

    If income is negative, print:

    Invalid Income
    If the calculated tax is greater than ₹1,00,000, add a 4% Health & Education Cess to the tax.
    Print the final tax amount with 2 decimal places.*/

    int income;
    float tax;

    printf("Enter Annual income: ");
    scanf("%d", &income);

    if (income < 0)
    {
        printf("Please enter valid income \n");
        return 0;
    }

    else if (income >= 0 && income <= 250000)
    {
        printf("No Tax \n");
        return 0;
    }

    else if (income > 250000 && income <= 500000)
        tax = (income - 250000) * 0.05;

    else if (income > 500000 && income <= 1000000)
        tax = ((income - 500000) * .2) + 12500;

    else if (income > 1000000)
        tax = ((income - 1000000) * .3) + 112500;

    if (tax > 100000)
        tax = tax + (tax * .04);

    printf("Total tax on %d is: %.2f", income, tax);

    return 0;
}