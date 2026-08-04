#include <stdio.h>
/*
Create an enum:

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

Store one value in a variable and write an if-else statement that prints:

"Stop" for RED
"Wait" for YELLOW
"Go" for GREEN
*/

int main()
{

    enum TrafficLight
    {
        RED,
        YELLOW,
        GREEN
    };

    enum TrafficLight signal = GREEN;

    if (signal == RED)
    {
        printf("Stop!!");
    }

    else if (signal == YELLOW)
    {
        printf("Wait!!");
    }

    else
        printf("Go...");

    return 0;
}