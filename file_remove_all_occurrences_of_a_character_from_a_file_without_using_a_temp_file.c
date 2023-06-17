// Program to remove all occurrences of a char from a file (without using a temp file)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[20], buffer[2000], c, remove, i = 0;
    printf("Enter the file name: ");
    scanf("%s", filename);
    fflush(stdin);
    printf("Enter the character to be removed: ");
    scanf("%c", &remove);
    FILE *fptr = fopen(filename, "r");

    // Error handling
    if (fptr == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }

    while ((c = fgetc(fptr)) != EOF)
    {
        buffer[i] = c;
        i++;
    }
    buffer[i]='\0';
    fclose(fptr);

    fptr = fopen(filename, "w");
    for (int j = 0; j < i; j++)
    {
        if (buffer[j] != remove)
        {
            fputc(buffer[j], fptr);
        }
    }

    fclose(fptr);

    return 0;
}