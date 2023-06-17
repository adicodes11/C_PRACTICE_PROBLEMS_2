// Program to count the number of words and numbers in a file

#include <stdio.h>
#include <ctype.h>

void file_alpha_num_counter(char filename[], int *num_count, int *word_count)
{
    char c;
    FILE *fptr = fopen(filename, "r");
    while ((c = fgetc(fptr)) != EOF)
    {
        if (isalpha(c))
            (*word_count)++;
        if (isdigit(c))
            (*num_count)++;
    }
}

int main()
{
    int num_count = 0, word_count = 0;
    char filename[20];
    printf("Enter the file name: ");
    scanf("%s", filename);

    file_alpha_num_counter(filename, &num_count, &word_count);
    printf("The number of words in the file is: %d\n", word_count);
    printf("The number of number count in the file is: %d\n", num_count);

    return 0;
}