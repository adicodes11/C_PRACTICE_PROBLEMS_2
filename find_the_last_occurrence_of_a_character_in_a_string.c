// Program to find the last occurrence of a character in a string

#include <stdio.h>
#include <string.h>

int last_occurrence_finder(char str[], char c)
{
    int slen = strlen(str);
    int last_occurrence = -1;
    for (int i = 0; i < slen; i++)
    {
        if (str[i] == c)
        {
            last_occurrence = i;
        }
    }
    return last_occurrence;
}

int main()
{
    char str[100], c;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character whose last occurrence is to be found: ");
    scanf("%c", &c);

    int index = last_occurrence_finder(str, c);
    if (index == -1)
    {
        printf("%c not found in the string\n");
    }
    else
    {
        printf("The last occurrence of %c is at index: %d\n", c, index);
    }

    return 0;
}