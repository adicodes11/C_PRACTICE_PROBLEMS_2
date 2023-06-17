// Program for linear search

#include <stdio.h>

void linear_search(int arr[], int size, int find)
{
    int i = 0, flag = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == find)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
        printf("The searched element %d is found at index %d\n", find, i);
    else
        printf("The searched element not found\n");
}

int main()
{
    int arr[10], n, find;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d", &find);

    linear_search(arr, n, find);

    return 0;
}