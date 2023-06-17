// Program to find all the most frequent values in an array

#include <stdio.h>

int most_frequent_finder(int arr[], int size, int num[], int freq[])
{
    int max = 0, count;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            num[k] = arr[i];
            freq[k] = count;
            k++;
        }
    }

    for(int i=0;i<k;i++)
    {
        
    }

    return k;
}

int main()
{
    int arr[10], freq[10], num[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = most_frequent_finder(arr, n, num, freq);

    printf("Most frequently occurring values in the array are\n");
    for (int i = 0; i < count; i++)
    {
        printf("Value: %-2d occurrence: %d\n", num[i], freq[i]);
    }

    return 0;
}