// Program to create a multiplication table chart

#include<stdio.h>

void multiplication_table(int start, int end)
{
    printf("%-5c",'X');
    for(int i=start;i<=end;i++)
    {
        printf("%-5d",i);
    }
    printf("\n");
    for(int i=start;i<=10;i++)
    {
        printf("%-5d",i);
        for(int j=1;j<=end;j++)
        {
            printf("%-5d",i*j);
        }
        printf("\n");
    }
}

int main()
{
    int start , end;
    printf("Enter the range for the multiplicaion table chart: ");
    scanf("%d %d",&start,&end);

    multiplication_table(start,end);

    return 0;
}