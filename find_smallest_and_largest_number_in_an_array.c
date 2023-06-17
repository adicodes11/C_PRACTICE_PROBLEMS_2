// Program to find the smallest and largest number in an array

#include <stdio.h>

void finder(int arr[], int size)
{
    int min, max;
    min = max = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<=min)
        {
            min = arr[i];
        }
        if(arr[i]>=max)
        {
            max = arr[i];
        }
    }
    printf("The smallest number in the array is: %d\n",min);
    printf("The largest number in the array is: %d\n",max);
}

int main()
{
    int arr[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    finder(arr,n);

    return 0;
}


/* // 2nd approach

#include<stdio.h>

int find_small(int arr[],int size)
{
    int min = arr[0];

    for(int i=0;i<size;i++)
    {
        if(arr[i]<=min)
        {
            min = arr[i];
        }
    }
    return min;
}

int find_large(int arr[],int size)
{
    int max = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=max)
        {
            max = arr[i];
        }
    }
    return max;
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

    int small = find_small(arr,n);
    int large = find_large(arr,n);

    printf("The smallest number in the array is: %d\n",small);
    printf("The largest number in the array is: %d\n",large);

    return 0;
}

*/