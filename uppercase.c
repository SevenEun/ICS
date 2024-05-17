#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        /// if lowercase - is greater than or equal to little 'a' and 'z'.
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            /// As the uppercase 'A' is 65 ASCII value, and lowercase 'a' is 97 ASCII value, we then can subtract 32 from the lowercase to get the uppercase.
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}