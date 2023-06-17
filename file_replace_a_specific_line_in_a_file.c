// Program to replace a specific line in a file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char file_name[20], temp_file_name[20] = "tempfile.txt", replacement[100], c, delete[1000];
    int line_number;

    printf("Enter the file name and line number for the replacement: ");
    scanf("%s %d", &file_name, &line_number);
    // getchar();   // To empty the input buffer
    fflush(stdin); // To empty the input buffer
    printf("Enter the replacement: ");
    gets(replacement);

    FILE *fptr = fopen(file_name, "r");
    FILE *temp = fopen(temp_file_name, "w");

    if (fptr == NULL || temp == NULL)
    {
        printf("Error opening file...\n");
        return 1;
    }

    while ((c = fgetc(fptr)) != EOF)
    {
        if (c == '\n')
        {
            line_number--;
        }
        fputc(c, temp);
        if (line_number == 1)
        {
            fputs(replacement, temp);
            fputc('\n', temp);
            line_number--;
        }
        if (line_number == 0)
        {
            while ((c = fgetc(fptr)) != '\n') // line 4 ko skip krne k liye
            {
            }
            while ((c = fgetc(fptr)) != EOF)
            {
                putc(c, temp);
            }
        }
    }
    fclose(fptr);
    fclose(temp);

    remove(file_name);
    rename(temp_file_name, file_name);

    return 0;
}