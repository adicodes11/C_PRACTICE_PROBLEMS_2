// Program to read all file contents in a string

#include <stdio.h>
#include<stdlib.h>

int main()
{
    char filename[100], buffer[1024], c;
    int i = 0;
    printf("Enter the file name: ");
    scanf("%s", &filename);

    FILE *fptr = fopen(filename, "r");

    if(fptr == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }

    while ((c = fgetc(fptr)) != EOF)
    {
        buffer[i]=c;
        i++;
    }
    buffer[i]='\0';
    printf("Displaying the file content:\n%s\n",buffer);

    return 0;
}