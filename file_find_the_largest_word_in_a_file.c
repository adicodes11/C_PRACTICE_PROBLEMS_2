// Program to find and print the longest word in a file

#include <stdio.h>
#include <string.h>

void largest_word_finder(char file_name[])
{
    int start, max = 0, count = 0, length = 0;
    char c, buffer[100000], word[20];
    FILE *fptr = fopen(file_name, "r");

    for (int i = 0; !feof(fptr); i++)
    {
        c = fgetc(fptr);
        buffer[i] = c;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (buffer[i] == ' ')
        {
            strcpy(word, "");
            length = 0;
        }
        buffer[i] = word[length];
        length++;
        if (length > max)
        {
            max = length;
        }
    }

    fclose(fptr);

    printf("The largest word in the string is");
}
int main()
{
    char file_name[20];
    printf("Enter the file name: ");
    gets(file_name);

    largest_word_finder(file_name);

    return 0;
}