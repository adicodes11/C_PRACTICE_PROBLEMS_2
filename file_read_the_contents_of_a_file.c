// Program to read file and display its content

#include<stdio.h>

int main()
{
    FILE *ptr= fopen("myfile.txt","r");
    
    if(ptr!=NULL)
    {
        char c;
        while((c = fgetc(ptr))!=EOF)
        {
            putchar(c);
        }
    }
    else
    {
        printf("Error opening file\n");
    }
    fclose(ptr);

    return 0;
}