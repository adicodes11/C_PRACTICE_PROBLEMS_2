// Program to insert a value into an array at a specific position

#include <stdio.h>

void insert_value_in_array(int arr[], int *size, int index, int value)
{
    for (int i = (*size); i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    (*size)++;
    arr[index] = value;
}

int main()
{
    int arr[10], n, insert_value, index;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index and value to be inserted: ");
    scanf("%d %d", &index, &insert_value);

    insert_value_in_array(arr, &n, index, insert_value);

    printf("After insertion the array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%-2d", arr[i]);
    }

    return 0;
}