// Program to count the number of lines in a file

#include <stdio.h>

int main()
{
    char file_name[20], c;
    int line_count = 1;     // bcz we will encounter the {(number of lines)-1} number of '\n'

    printf("Enter the file name: ");
    gets(file_name);
    FILE *fptr = fopen(file_name, "r");

    if(fptr == NULL)
    {
        printf("Error opening file...\n");
        return 1;
    }
    while ((c = fgetc(fptr)) != EOF)
    {
        if (c == '\n')
        {
            line_count++;
        }
    }

    printf("The number of lines in the file are: %d\n", line_count);
    fclose(fptr);

    return 0;
}