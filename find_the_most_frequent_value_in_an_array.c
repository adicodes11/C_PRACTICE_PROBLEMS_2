// Program to find the most frequent value in an array

#include <stdio.h>

void most_frequent_finder(int arr[], int size, int num[], int *size2, int *freq)
{
    int max = 1, count, k = 0, flag;
    for (int i = 0; i < size; i++)
    {
        count = 1;
        flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                count++;
            }
        }
        if (count > max)
        {
            for (int x = 0; x < k; x++)
            {
                num[x] = 0;
            }
            k = 0;
            *size2 = 0;
            max = count;
            num[k] = arr[i];
            *freq = count;
            (*size2)++;
            k++;
        }
        else if (count == max)
        {
            for (int x = 0; x < k; x++)
            {
                if (arr[i] == num[x])
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                num[k] = arr[i];
                k++;
                (*size2)++;
            }
        }
    }
}

int main()
{
    int arr[10], n, num[10], size2, freq;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    most_frequent_finder(arr, n, num, &size2, &freq);

    printf("Most frequently occurring values in the array are\n");
    for (int i = 0; i < size2; i++)
    {
        printf("Value: %-2d occurrence: %d\n", num[i], freq);
    }
    return 0;
}