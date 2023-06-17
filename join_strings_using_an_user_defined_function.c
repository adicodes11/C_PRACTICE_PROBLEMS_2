// Program to join strings using a defined function

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_join(char strings[10][100], int count, char seperator[])
{
    // Error handling
    if (count <= 0)
        return NULL;

    int new_length = (count - 1) * strlen(seperator); // bcz n strings k beech mein n-1 seperators hote hai

    for (int i = 0; i < count; i++)
    {
        new_length += strlen(strings[i]);
    }
    new_length += 1; // for the NULL terminator

    char *join = malloc(new_length);

    strcpy(join, strings[0]);

    for (int i = 1; i < count; i++)
    {
        strcat(join, seperator);

        strcat(join, strings[i]);
    }
    join[strlen(join)] = '\0';

    return join;
}

// Modified algorithm
char *join2(char **strings, int count, char *seperator)
{
    // Error handling
    if (count <= 0)
        return NULL;

    int new_length = (count - 1) * strlen(seperator); // bcz n strings k beech mein n-1 seperators hote hai

    for (int i = 0; i < count; i++)
    {
        new_length += strlen(strings[i]);
    }
    new_length += 1; // for the NULL terminator

    char *join = malloc(new_length);

    strcpy(join, strings[0]);

    for (int i = 1; i < count; i++)
    {
        strcat(join, seperator);

        strcat(join, strings[i]);
    }
    join[strlen(join)] = '\0';

    return join;
}

int main()
{
    char strings[10][100] = {"Aditya", "is", "a", "good", "boy."};
    char seperator[10] = " ";

    char *join = string_join(strings, 5, seperator);
    puts(join);

    free(join);

    char **strings2 = malloc(4 * sizeof(char *));

    strings2[0] = malloc(10 * sizeof(char));
    strings2[1] = malloc(10 * sizeof(char));
    strings2[2] = malloc(10 * sizeof(char));
    strings2[3] = malloc(10 * sizeof(char));
    strings2[4] = malloc(10 * sizeof(char));

    for (int i = 0; i < 5; i++)
    {
        strcpy(strings2[i], strings[i]);
    }

    char *c = join2(strings2, 5, seperator);
    puts(c);

    free(c);

    return 0;
}