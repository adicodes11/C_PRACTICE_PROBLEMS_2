// Program to delete all lines from a file that contain a character from a group of charcters

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 1024

void char_line_remover(char filename[], char del_char[])
{
    char buffer[BUFFER_SIZE];
    char tempfile[20];
    strcpy(tempfile, "temp_");
    strcat(tempfile, filename);

    FILE *file = fopen(filename, "r");
    FILE *temp = fopen(tempfile, "w");

    // Error Handling
    if (file == NULL || temp == NULL)
    {
        printf("Error opening file...\n");
        exit(4);
    }

    while (!feof(file))
    {
        if (ferror(file) || feof(file))
        {
            printf("Error opening file...\n");
            exit(4);
        }

        fgets(buffer, BUFFER_SIZE, file);
        if (strpbrk(buffer, del_char) == NULL)
        {
            fputs(buffer, temp);
        }
    }

    fclose(file);
    fclose(temp);
    remove(filename);
    rename(tempfile, filename);
}

int main()
{
    char filename[20], del_char[100];
    printf("Enter the file name: ");
    fgets(filename, 20, stdin);
    filename[strlen(filename) - 1] = '\0';
    printf("Enter the characters: ");
    fgets(del_char, 100, stdin);
    del_char[strlen(del_char) - 1] = '\0';

    char_line_remover(filename, del_char);

    return 0;
}