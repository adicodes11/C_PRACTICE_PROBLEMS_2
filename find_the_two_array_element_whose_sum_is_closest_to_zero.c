// Program to find the two array elements whose sum is closest to zero

#include<stdio.h>

void sum_close_to_zero_finder(int arr[],int size,int *a,int *b)
{
    int min = 100,sum = 0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            sum = arr[i]+arr[j];
            if(sum<min)
            {
                min = sum;
                *a = arr[i];
                *b = arr[j];
            }
        }
    }
}

int main()
{
    int arr[10],n,a,b;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sum_close_to_zero_finder(arr,n,&a,&b);
    printf("The requierd two array elements are: %d %d\n",a,b);

    return 0;
}