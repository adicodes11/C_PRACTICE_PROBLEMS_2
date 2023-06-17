// Program to append a text at a specific line in a file

#include <stdio.h>

void text_adder(char filename[], int line_number, char str[])
{
    char c;
    FILE *fptr = fopen(filename, "r");
    FILE *temp = fopen("tempfile.txt", "w");

    // Error handling
    if (fptr == NULL)
    {
        printf("Error opening file...\n");
        goto end;
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
            fputs(str, temp);
            fputc('\n', temp);
            line_number--;
        }
    }
    end:
    printf("Competed!!\n");
}

int main()
{
    char filename[20], str[100];
    int line_number;
    printf("Enter the file name: ");
    gets(filename);
    printf("Enter the line number: ");
    scanf("%d", &line_number);
    fflush(stdin);
    printf("Enter the text to be added: ");
    gets(str);

    text_adder(filename, line_number, str);

    return 0;
}