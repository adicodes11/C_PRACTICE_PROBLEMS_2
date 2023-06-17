// Program to find the minimum distance between two different numbers in an array

#include <stdio.h>
#include <stdlib.h>

int dist_calc(int arr[], int size, int element1, int element2)
{
    int index1, index2, dist = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element1)
        {
            index1 = i;
            continue;
        }
        if (arr[i] == element2)
        {
            index2 = i;
            continue;
        }
    }
    dist = index1 - index2;
    dist = abs(dist);

    return dist;
}

int main()
{
    int arr[10], n;
    int element1, element2;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element1: ");
    scanf("%d", &element1);
    printf("Enter element2: ");
    scanf("%d", &element2);

    int dist = dist_calc(arr, n, element1, element2);
    if (dist == -1)
    {
        printf("Elements not found...\n");
    }
    else
    {
        printf("The distance between %d and %d is: %d\n", element1, element2, dist);
    }

    return 0;
}