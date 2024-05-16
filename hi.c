#include <cs50.h>
#include <stdio.h>

int main(void) 
{    
    // instead of using two variables, we can use an array
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!"; 

    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);

    // printf("%s\n", words[0]);
    // printf("%s\n", words[1]);

    /// Two variables
    // string s = "HI!";
    // string t = "BYR!";

    // printf("%s\n", s);
    // printf("%s\n", t);
}