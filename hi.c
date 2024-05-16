#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    string s = "HI!";

    /// Every strings in double quotes ends with a backslash zero
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}