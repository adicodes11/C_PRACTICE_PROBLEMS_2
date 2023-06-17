#include<stdio.h>

int main()
{
    int n,m;

    for(int i=0;i<10;i++)
    {
        printf("Enter the value of n: ");
        scanf("%d",&n);
        for(int j =0;j<10;j++)
        {
            printf("Enter the value of m: ");
            scanf("%d",&m);
            if(n+m==13)
            {
                goto end;
            }
            else
            {
                break;
            }
        }
    }

    end:

    return 0;
}