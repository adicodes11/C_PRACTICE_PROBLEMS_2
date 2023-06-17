// Program to reverse a file 1

#include <stdio.h>
#include <stdlib.h>

void file_reverser(char filename[], char reversefile[])
{
    FILE *fptr = fopen(filename, "r");
    FILE *rev = fopen(reversefile, "w");

    if (fptr == NULL || rev == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }

    fseek(fptr, 0, SEEK_END);
    int length = ftell(fptr);
    fseek(fptr, -1, SEEK_CUR);

    while (length > 0)
    {
        char c = fgetc(fptr);
        if (c == '\n')
        {
            fputc('\n',rev);
            fseek(fptr, -1, SEEK_CUR);
            length--;
        }
        else
        {
            fputc(c, rev);
        }
        fseek(fptr, -2, SEEK_CUR); // -2 liya bcz fgetc() forward move krega 1 se toh humein uske pehle wala character read
        length--;                  // krne k liye 2 position backward move krna padega
    }
    fclose(fptr);
    fclose(rev);

    remove(filename);
    rename(reversefile, filename);
}

int main()
{
    char filename[20], reversefile[20] = "tempfile.txt";
    printf("Enter the file name: ");
    scanf("%s", &filename);

    file_reverser(filename, reversefile);

    return 0;
}