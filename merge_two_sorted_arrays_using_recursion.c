// Program to merge two sorted arrays using recursion

#include <stdio.h>

void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int sorted_array[])
{
    if (size1 != 0 || size2 != 0)
    {
        if (size1 == 0)
        {
            *sorted_array = *arr2;
            merge_sorted_arrays(arr1, size1, arr2 + 1, size2 - 1, sorted_array + 1);
        }
        else if (size2 == 0)
        {
            *sorted_array = *arr1;
            merge_sorted_arrays(arr1 + 1, size1 - 1, arr2, size2, sorted_array + 1);
        }
        else if (*arr1 < *arr2)
        {
            *sorted_array = *arr1;
            merge_sorted_arrays(arr1 + 1, size1 - 1, arr2, size2, sorted_array + 1);
        }
        else
        {
            *sorted_array = *arr2;
            merge_sorted_arrays(arr1, size1, arr2 + 1, size2 + 1, sorted_array + 1);
        }
    }
}

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5};
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sorted_array[20];

    merge_sorted_arrays(arr1, 5, arr2, 10, sorted_array);
    printf("Displaying the merged sorted array: ");
    for (int i = 0; i < 15; i++)
    {
        printf("%-2d", sorted_array[i]);
    }

    return 0;
}