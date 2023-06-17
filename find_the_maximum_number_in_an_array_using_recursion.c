// Program to find the maximum number in an array using recursion

#include <stdio.h>

int max_of_array(int arr[], int n)
{
    int max = 0;
    if (n == 1)
    {
        return arr[n - 1];
    }
    else
    {
        max = max_of_array(arr, n - 1);
    }
    if (max > arr[n - 1])
    {
        return max;
    }
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

    int max = max_of_array(arr, n);
    printf("The maximum is: %d\n", max);

    return 0;
}