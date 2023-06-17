// Program for linear search

#include <stdio.h>
#include <stdbool.h>

int j;

bool linear_search(int arr[], int size, int find)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == find)
        {
            j = i;
            return true; // flag ka use nahi krna pada
        }
    }

    return false;
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
    printf("Enter the element to be searched: ");
    scanf("%d", &find);

    if (linear_search(arr, n, find))
        printf("%d is found in the array at index %d\n", find, j);
    else
        printf("%d is not found in the array\n", find);

    return 0;
}