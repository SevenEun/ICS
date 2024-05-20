// iteration means to loop again and again. is a pass through the code.
#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    /// Essentially iterate over every row of the pyramid top to bottom
    /// Outer loop iterating n times starting from 0
    for (int i = 0; i < n; i++)
    {
        /// inner loop have at least 1 hash then so on. Thus, can't start from 0
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        /// print out a new line to move the cursor down a line
        printf("\n");
    }
}