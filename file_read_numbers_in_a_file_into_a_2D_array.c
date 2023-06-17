// Program to read numbers in a file into a 2D array

// File name : readfile.txt

#include <stdio.h>

int main()
{
    char filename[20];
    printf("Enter the file name: ");
    gets(filename);

    float arr[3][4];

    FILE *fptr = fopen(filename, "r");

    // Error handling
    if (fptr == NULL)
    {
        printf("Error opening file...\n");
        return 1;
    }

    while (!feof(fptr))
    {
        if (ferror(fptr))
        {
            printf("Error opening file...\n");
            return 1;
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (fscanf(fptr, "%f", &arr[i][j]) == EOF)
                    break;
            }
        }
    }

    fclose(fptr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%-7.2f", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}