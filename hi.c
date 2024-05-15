#include <stdio.h>

int main(void) 
{
    /// not the best approach but jus for demonstration sake.
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    /// Three separate placeholders for the three characters.
    // printf("%c%c%c\n", c1, c2, c3);

    /// %i is used to print an integer and converts the char values to thier corresponding ASCII values.
    printf("%i %i %i\n", c1, c2, c3);

}