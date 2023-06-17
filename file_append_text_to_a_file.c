// Program to append text to a file

#include<stdio.h>

int main()
{
    char str[200];
    printf("Enter the text to be appended in the file: ");
    gets(str);

    FILE *fptr = fopen("myfile.txt","a");
    putc(' ',fptr);
    fprintf(fptr,"%s",str);

    fclose(fptr);

    return 0;
}