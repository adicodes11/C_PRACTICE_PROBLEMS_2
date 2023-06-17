// Program to merge the contents of two files into third file

#include <stdio.h>

int main()
{
    FILE *f1 = fopen("txt1.txt", "r");
    FILE *f2 = fopen("txt2.txt", "r");
    FILE *f3 = fopen("txt3.txt", "w");

    if(f1 == NULL || f2 == NULL || f3 == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    char c;
    while ((c = fgetc(f1)) != EOF)
    {
        fputc(c,f3);
    }
    fclose(f1);

    fputc(' ',f3);

    while((c = fgetc(f2))!=EOF)
    {
        fputc(c,f3);
    }
    fclose(f2);

    fclose(f3);

    return 0;
}