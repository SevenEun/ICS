#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    /// Doing an error checking with a conditional, making sure with this Boolean expression only if argc equals equals to 2.
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("Null, as not exactly equal to 2\n");
    }
}