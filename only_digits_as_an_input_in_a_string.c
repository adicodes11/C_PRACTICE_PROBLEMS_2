// Program to implement only digits as an input in a string'

#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[100],temp;
    int i = 0;

    printf("Enter the string: ");
    while(temp!='\n')
    {
        scanf("%c",&temp);
        if(isdigit(temp))
        {
            str[i]=temp;
            i++;
        }
    }
    str[i]='\0';

    printf("The input string is: %s\n",str);    

    return 0;
}