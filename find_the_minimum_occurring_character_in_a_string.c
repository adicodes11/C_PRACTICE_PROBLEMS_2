// Program to find the minimum occurring characters in a string

#include <stdio.h>
#include <string.h>

int min_finder(char *str, char *buffer)
{
    int slen = strlen(str);
    int count = 0;
    int min_count = slen;
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

        for (int j = 0; j < k; j++)
        {
            if (str[i] == buffer[j])
            {
                break;
            }
            continue;
        }
        if (count < min_count)
        {
            k = 0;
            min_count = count;
            buffer[k] = str[i];
        }
        else if (count == min_count)
        {
            if (strchr(buffer, str[i]) == NULL)
            {
                k++;
                buffer[k] = str[i];
            }
        }
    }
    buffer[strlen(buffer)] = '\0';

    return min_count;
}

int main()
{
    char str[100] = "aaaa bb cc dddd";
    char buffer[100] = "";

    int min_count = min_finder(str, buffer);
    for (int i = 0; i < strlen(buffer); i++)
    {
        printf("Min char: %c   occurrence: %d\n", buffer[i], min_count);
    }

    return 0;
}