#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /// Whole bunch of numbers in an array, can use these curly braces to initialize an array.
     int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    /// Ask the user for a number
     int n = get_int("Number: ");
     for (int i = 0; i < 7; i++)
     {
        /// Check if the number is in the array
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
     }  
     printf("Not found\n");
     return 1;
}