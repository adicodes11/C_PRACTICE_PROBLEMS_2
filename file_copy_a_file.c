// Program to copy a file

#include<stdio.h>

int main()
{
    char str[200];
    FILE *copy = fopen(__FILE__,"r");
    FILE *paste = fopen("myfile.txt","w");

    if(copy == NULL)    //Error handling
    {
        printf("Error opening file\n");
        return -1;
    }

    char c ;
    while((c = fgetc(copy))!=EOF)
    {
        fputc(c,paste);
    }

    fclose(copy);
    fclose(paste);

    return 0;
}