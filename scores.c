#include <cs50.h>
#include <stdio.h> 

/// literally at the top of the file, before the main function. Sharing of variable across multiple functions.
const int N = 3;

int main(void)
{
    /// Can be defined as a global variable, that is not inside the curly braces.
    // const int N = 3;
    
    int scores[N];

    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    /// second design
    // scores[0] = get_int("Score: ");
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");

    /// first design 
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}