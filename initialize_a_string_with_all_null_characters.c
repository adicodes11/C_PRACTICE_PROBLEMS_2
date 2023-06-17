// Program to initialize a string with all null characters

#include <stdio.h>

int main()
{
    char str[10] = "";

    for (int i = 0; i < 10; i++)
    {
        if (str[i] == '\0')
        {
            printf("\\0");
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}