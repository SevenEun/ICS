#include <cs50.h>
#include <stdio.h>

void print_column(int height);

int main(void) 
{
    int h = get_int("Height: ");
    print_column(h);

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("i is %i\n", i);
    //     printf("#\n");
    // }
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}