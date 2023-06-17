// Program to create a HTML parser not full fledged

#include <stdio.h>
#include <string.h>

void html_parser(char *str)
{
    int slen = strlen(str);
    char temp[100] = "";
    int j = 0;

    for (int i = 0; i < slen; i++)
    {
        if (str[i] == '<')
        {
            while (str[i] != '>')
            {
                i++;
            }
            while (str[i+1] == ' ')
            {
                i++;
            }
        }
        else
        {
            temp[j] = str[i];
            j++;
        }
    }

    while (j - 1 > 0 && temp[j - 1] == ' ') // Removing trailing characters
    {
        j--;
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int main()
{
    char str[100] = "<h1>          This is a new string.       </h1>";

    // Output: This is a new string.    // Without starting and ending spaces

    html_parser(str);
    printf("Parsed string:%saaaaa\n", str);

    return 0;
}