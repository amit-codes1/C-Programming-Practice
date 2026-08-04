#include <stdio.h>
/*
Create an enum:

OFF,
ON,
SLEEP

Ask the user to enter a choice (0–2).

Use a switch statement to print what the device is doing.

Example:

OFF    -> Device is turned off.
ON     -> Device is running.
SLEEP  -> Device is in sleep mode.
*/

int main()
{

    enum State
    {
        OFF,
        ON,
        SLEEP
    };

    int num;

    printf("----OFF(0)----ON(1)----SLEEP(2)---- \n");

    printf("Enter a Number from 0-2: ");
    scanf("%d", &num);

    if (num > 2 || num < 0)
    {
        printf("Please Enter Value from 0 to 2 \n");
    }

    enum State s = num;

    switch (s)
    {
    case OFF:
        printf("DEVICE IS TURNED OFF!!");
        break;

    case ON:
        printf("DEVICE IS RUNNING!!");
        break;

    case SLEEP:
        printf("DEVICE IS IN SLEEP MODE!!");
        break;
    }

    return 0;
}