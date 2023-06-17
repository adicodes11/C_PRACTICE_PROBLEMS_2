// Program to find the index of k in a sorted array of distinct elements or where it belongs to keep it sorted

#include <stdio.h>

void k_checker(int arr[], int size, int k)
{
    int flag = 0, index;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<k)
        {
            index = i;
        }
        else if(arr[i]==k)
        {
            flag = 1;
            index = i;
        }
    }
    if(flag == 1)
    {
        printf("%d is found at index %d\n",k,index);
    }
    else
    {
        printf("%d should be placed at index %d to keep the array sorted\n",k,index+1);
    }
}
int main()
{
    int arr[10], n, k;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements in an order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    k_checker(arr, n, k);

    return 0;
}