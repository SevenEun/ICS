#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // string answer = get_string("What's your name? ");
    // printf("Hello, %s\n ", answer);

    char name[100]; // Assuming the name won't exceed 100 characters
    printf("Enter your name: ");
    scanf("%99s", name); // Read a string from the user, limiting to 99 characters to avoid buffer overflow

    printf("Hello, %s\n", name); // Print the greeting
}