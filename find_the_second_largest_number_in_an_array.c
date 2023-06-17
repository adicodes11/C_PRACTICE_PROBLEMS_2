// Program to find the second largest number in an array

#include <stdio.h>

int second_large_number_finder(int arr[], int size)
{
    int max = 0, max2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max2 && arr[i] != max)
            max2 = arr[i];
    }

    return max2;
}

int main()
{
    int arr[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int large2 = second_large_number_finder(arr, n);
    printf("The second largest number in the array is: %d\n", large2);

    return 0;
}