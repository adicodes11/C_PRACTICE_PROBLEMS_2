// Program to find the minimum number in an array using recursion

#include <stdio.h>

int min_of_array(int arr[], int n)
{
    int min;
    if (n == 1)
    {
        return arr[n - 1];
    }
    else
    {
        min = min_of_array(arr, n - 1);
    }
    if (min < arr[n - 1])
    {
        return min;
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

    int min = min_of_array(arr, n);
    printf("The minimum is: %d\n", min);

    return 0;
}