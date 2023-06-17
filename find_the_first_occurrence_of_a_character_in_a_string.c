// Program to find the first occurrence of a character in a string

#include <stdio.h>
#include <string.h>

int first_occurrence_char(const char str[], char c)
{
    int slen = strlen(str);
    for (int i = 0; i < slen; i++)
    {
        if (str[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str[100], c;
    printf("Enter the string: ");
    gets(str);
    fflush(stdin);
    printf("Enter the character whose first occurrence is to be checked: ");
    scanf("%c", &c);

    int index = first_occurrence_char(str, c);
    if (index == -1)
    {
        printf("%c not found\n");
    }
    else
    {
        printf("The first occurrence of %c is at index: %d\n", c, index);
    }

    return 0;
}