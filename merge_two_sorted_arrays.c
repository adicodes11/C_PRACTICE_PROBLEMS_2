// Program to merge two sorted arrays

#include <stdio.h>

void merge(int arr1[], int n1, int arr2[], int n2, int result[])
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if(arr1[i]<arr2[j])
        {
            result[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }

}

int main()
{
    int arr1[10], arr2[10], n1, n2;
    int result[20];

    printf("Enter the array1 size: ");
    scanf("%d", &n1);
    printf("Enter the array1 elements: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the array2 size: ");
    scanf("%d", &n2);
    printf("Enter the array2 elements: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    merge(arr1, n1, arr2, n2, result);

    printf("Displaying the merged sorted array: ");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%-4d", result[i]);
    }

    return 0;
}