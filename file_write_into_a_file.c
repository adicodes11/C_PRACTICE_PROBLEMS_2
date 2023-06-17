// Program to write into a file

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    FILE *ptr = fopen("myfile.txt","w");
    fprintf(ptr,"%s",str);

    fclose(ptr);

    return 0;
}