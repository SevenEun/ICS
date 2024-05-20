#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    string name;
    string number;
}
person;

int main(void)
{
    person people[3];

    /// Setting the new piece of syntax, this person's name. The period, a literal dot operator that says go inside this person and access thier name field or name attribute.
    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";

    people[2].name = "John";
    people[2].number = "+1-949-468-2750";

    string name = get_string("Name: ");
    for (int i = 0; i <3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            /// Plug in that person corresponding number and not just 'Found' but also found this specific number.
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}