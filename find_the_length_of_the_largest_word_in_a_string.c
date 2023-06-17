// Program to calculate the length of the largest word in a string

#include <stdio.h>
#include <string.h>

void largest_word_length_finder(char str[], char word[])
{
    int slen = strlen(str), max = 0, start, end, j = 0, wlen = 0, new_start;

    for (int i = 0; i < slen; i = end + 2)
    {
        start = i;
        j = i;
        while (str[j] != ' ' && str[j] != '\0')
        {
            wlen++;
            j++;
        }
        end = start + wlen - 1;
        if (wlen > max)
        {
            max = wlen;
            new_start = start;
        }
        wlen = 0;
    }
    for(int i =0;i<max;i++)
    {
        word[i]=str[new_start+i];
    }
    word[max]='\0';
    printf("Largest word: %s\nIt's length: %d\n",word,max);
}

int main()
{
    char str[100], word[100];
    printf("Enter the string: ");
    gets(str);

    largest_word_length_finder(str, word);

    return 0;
}