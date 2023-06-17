// Program to find the most occurring characters in a string

#include <stdio.h>
#include <string.h>

int max_finder(char *str, char *buffer)
{
    int slen = strlen(str);
    int count;
    int max_count = 0;
    int k = 0;

    for (int i = 0; i < slen; i++)
    {
        count = 0;
        for (int j = 0; j < slen; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (strchr(buffer, str[i]) != NULL)
            continue;

        if (count > max_count)
        {
            k = 0;
            max_count = count;
            buffer[k] = str[i];
            for (int j = 1; j < strlen(buffer); j++)
            {
                buffer[j] = '\0';
            }
        }
        else if (count == max_count)
        {
            k++;
            buffer[k] = str[i];
        }
    }
    buffer[strlen(buffer)] = '\0';

    return max_count;
}

int main()
{
    char str[100] = "aaaa bbbb cccccc dddd";
    char buffer[100] = "";

    int max_count = max_finder(str, buffer);
    for (int i = 0; i < strlen(buffer); i++)
    {
        printf("Max char: %c   occurrence: %d\n", buffer[i], max_count);
    }

    return 0;
}