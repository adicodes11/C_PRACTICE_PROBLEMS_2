// Program to find the length of the smallest word in the string

#include <stdio.h>
#include <string.h>

void smallest_word_length_counter(char str[],char word[])
{
    int slen = strlen(str), min = 100, j = 0, start, end, wlen = 0,new_start;
    for (int i = 0; i < slen; i = end + 2)
    {
        start = i;
        j = i;
        while(str[j]!=' ' && str[j]!='\0')
        {
            wlen++;
            j++;
        }

        end = start + wlen - 1;

        if(wlen<min)
        {
            min = wlen;
            new_start = start;
        }
        wlen = 0;
    }
    for(int i = 0;i<min;i++)
    {
        word[i]=str[new_start+i];
    }
    word[min]='\0';
    printf("Smallest word: %s\nIt's length: %d\n",word,min);
}

int main()
{
    char str[100],word[100];
    printf("Enter the string: ");
    gets(str);

    smallest_word_length_counter(str,word);
    return 0;
}