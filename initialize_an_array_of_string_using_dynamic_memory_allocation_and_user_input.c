// Program to initialize an array of strings using dynamic memory allocation with user input

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int array_of_strings(char ***strings)
{
    int string_count = 0;
    char buffer[BUFFER_SIZE];
    int cont = 1;

    *strings = malloc(sizeof(char *));
    do
    {
        string_count++;
        (*strings) = realloc(*strings, string_count * sizeof(char *));
        (*strings)[string_count - 1] = malloc(BUFFER_SIZE);

        printf("Enter string: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        int slen = strlen(buffer);
        buffer[slen-1] = '\0';
        strcpy((*strings)[string_count - 1], buffer);

        printf("Press 1 to add another string and 0 to stop: ");
        scanf("%d", &cont);
        fflush(stdin);
    } while (cont != 0);

    return string_count;
}

int main()
{
    char **strings = NULL;

    int string_count = array_of_strings(&strings);

    printf("Displaying the array of strings\n");
    for (int i = 0; i < string_count; i++)
    {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < string_count; i++)
    {
        free(strings[i]);
    }
    free(strings);

    return 0;
}