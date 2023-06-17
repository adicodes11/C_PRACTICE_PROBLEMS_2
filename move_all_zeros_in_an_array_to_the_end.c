// Program to move all zeros in an array to the end

#include <stdio.h>

void zero_mover(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j < size; j++)
            {
                if (arr[j] != 0)
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }

    printf("Array after moving zeros: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    zero_mover(arr, n);

    return 0;
}