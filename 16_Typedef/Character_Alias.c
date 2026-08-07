#include <stdio.h>
/*
Create a typedef named Character for char.

Store a single character.
Print the character and its ASCII value.
*/

int main()
{

    typedef char Character;

    Character letter;

    printf("Enter a Letter: ");
    scanf("%c", &letter);

    printf("Entered Char: %c \n", letter);
    
    printf("ASCII Value of %c is: %d \n", letter, letter);

    return 0;
}