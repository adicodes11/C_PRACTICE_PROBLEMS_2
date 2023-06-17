// Program to read and store each line of a file into an array of strings

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void reader(char filename[], char strings[][BUFFER_SIZE], int *lines)
{
    char buffer[BUFFER_SIZE];
    FILE *file = fopen(filename, "r");
    int slen = 0;
    // Error handling
    if (file == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }
    while (!feof(file))
    {
        if (ferror(file))
        {
            printf("Error opening file...\n");
            exit(0);
        }
        (*lines)++;
        fgets(buffer, BUFFER_SIZE, file);
        if (strchr(buffer, '\n') == NULL) // last line hogi toh \n nahi rahega usmein issliye woh \n ko \0 krne ki zarurat nahi
        {
            buffer[strlen(buffer)] = '\0';
            slen = strlen(buffer);
        }
        else
        {
            buffer[strlen(buffer) - 1] = '\0';
            slen = strlen(buffer) + 1;
        }
        strcpy(strings[(*lines) - 1], buffer);
    }
    fclose(file);
}

int main()
{
    char filename[20], strings[10][BUFFER_SIZE];
    int lines = 0;
    printf("Enter the file name: ");
    fgets(filename, 20, stdin);
    filename[strlen(filename) - 1] = '\0';

    reader(filename, strings, &lines);
    printf("%d\n", lines);
    printf("Displaying the array of strings\n");
    for (int i = 0; i < lines; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}