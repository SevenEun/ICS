#include <stdio.h>

void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
    // int i = 3;
    // while (i > 0)
    // {
    //     printf("meow\n");
    //     i--;
    // }
}

void meow(void)
{
    printf("meow\n");
}