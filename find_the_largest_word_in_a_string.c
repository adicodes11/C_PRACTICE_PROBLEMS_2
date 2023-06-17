// Program to find and print the longest word in a string

#include <stdio.h>
#include <string.h>

char *largest_word_finder(char str[], char word[])
{
    int slen = strlen(str), max = 0, wlen = 0, i = 0;
    char non_words[10] = {' ', '\n', '\t', '\n', '.', ',', '\\', ';', ':'};
    char temp[100];

    for (int i = 0; i < slen; i ++)
    {
        wlen = 0;
        for (int j = i; j < slen; j++)
        {
            if (strchr(non_words, str[j]) !=NULL)
            {
                break;
            }
            temp[wlen] = str[j];
            wlen++;
        }
        temp[wlen] = '\0';
        if (wlen > max)
        {
            max = wlen;
            strcpy(word, temp);
            i++;
        }
    }
    return word;
}

int main()
{
    char str[100], word[100];
    int slen, wlen, max = 0;

    printf("Enter a string: ");
    gets(str);

    strcpy(word, largest_word_finder(str, word));
    printf("The largest word in the string is: %s\n", word);

    return 0;
}