// Program to add line numbers to a file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

void file_line_number_adder(char filename[])
{
    char tempfile[20] = "tempfile.txt", buffer[MAX_LINE];
    int lines = 1;

    FILE *fptr = fopen(filename, "r");
    FILE *temp = fopen(tempfile, "w");

    // Error handling
    if (fptr == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }
    while (fgets(buffer, MAX_LINE, fptr) != NULL)
    {
        fprintf(temp,"%d. %s",lines,buffer);
        lines++;
    }

    fclose(fptr);
    fclose(temp);
    remove(filename);
    rename(tempfile, filename);
}

int main(int argc, char *argv[])
{
    char *filename;

    if (argc > 2)
    {
        printf("Incorrect number of arguments!!\n");
        return 1;
    }
    else
    {
        filename = argv[1];
    }

    file_line_number_adder(filename);

    return 0;
}