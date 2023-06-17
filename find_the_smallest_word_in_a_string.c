// Program to find and print the smallest word in a string

#include <stdio.h>
#include <string.h>

void smallest_word_finder(char str[], char word[])
{
    int slen = strlen(str), i = 0, j = 0;
    char min_word[20] = "aaa";

    for (i = 0; i < slen; i++)
    {
        j = 0;
        while (str[i] != ' ' && str[i] != '\n' && str[i] != '.' && str[i] != ',')
        {
            word[j] = str[i];
            j++;
            i++;
        }
        word[j] = '\0';
        if (strlen(word) < strlen(min_word))
        {
            strcpy(min_word, word);
        }
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '.' || str[i] == ',')
            continue;
    }
    strcpy(word, min_word);
}

int main()
{
    char str[100], word[20];
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    smallest_word_finder(str, word);
    printf("The smallest word: %s\n", word);

    return 0;
}