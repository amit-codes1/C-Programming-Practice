#include <stdio.h>

int main()
{
    /*
    Units	Rate
First 100 units	₹2/unit
Next 100 units	₹3/unit
Above 200 units	₹5/unit*/

    /*
    Additionally:

    If the total bill exceeds ₹1000, add a 10% surcharge.
    If the user enters negative units, print:
    Invalid Input*/

    int units;
    float bill;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units >= 0 && units <= 100)
        bill = units * 2.0;

    else if (units > 100 && units <= 200)
        bill = (100 * 2.0) + ((units - 100) * 3.0);

    else if (units > 200)
        bill = ((100 * 2.0) + (100 * 3.0) + ((units - 200) * 5.0));

    else
    {
        printf("Invalid Input");
        return 0;
    }

    if (bill > 1000.0)
        bill = bill + (bill * 0.1);

    printf("Total bill : %.2f", bill);

    return 0;
}