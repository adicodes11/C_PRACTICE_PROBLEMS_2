// Program to give new name to a file

#include<stdio.h>
#include<string.h>

int main()
{
    char filename[20],newfile[40];
    printf("Enter the file name: ");
    gets(filename);

    strcpy(newfile,filename);
    strcat(newfile,"__file.txt");

    printf("Previous file name: %s\n",filename);
    printf("New file name: %s\n",newfile);

    return 0;
}