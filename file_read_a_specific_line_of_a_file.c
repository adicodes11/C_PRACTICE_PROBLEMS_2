// Program to read a specific line of a file

#include <stdio.h>

int main()
{
    char file_name[20], buffer[1000], c;
    int line;
    printf("Enter the file name and the line number of the line to be read: ");
    scanf("%s %d", &file_name, &line);

    FILE *fptr = fopen(file_name, "r");

    if (fptr == NULL)
    {
        printf("Error opening file...\n");
        return 1;
    }
    while ((c = fgetc(fptr)) != EOF && line != 0)
    {
        if (c == '\n')
        {
            line--;
        }
        if (line == 1)
        {
            fgets(buffer, 1000, fptr);
            puts(buffer);
        }
    }
    if (c = EOF)
    {
        printf("Please enter a valid line number...\n");
    }

    fclose(fptr);

    return 0;
}