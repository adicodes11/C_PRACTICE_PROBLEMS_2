// Program to find the second lowest number in an array

#include<stdio.h>

int second_smallest_number_finder(int arr[],int size)
{
    int min = 100 , min2 = 100 ;
    for(int i=0 ;i<size ;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    for(int i =0;i<size ;i++)
    {
        if(arr[i]<min2 && arr[i]!=min )
        {
            min2 = arr[i];
        }
    }
    return min2;
}

int main()
{
    int arr[10],n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min2 = second_smallest_number_finder(arr,n);
    printf("The second smallest number in the array is %d\n",min2);

    return 0;
}