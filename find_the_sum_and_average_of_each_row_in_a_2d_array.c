// Program to find sum and average of each row in a 2d array

#include <stdio.h>

void array_input(int arr[10][10], int rows, int cols)
{
    printf("Enter the array elements: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void array_output(int arr[10][10], int rows, int cols)
{
    printf("\nDisplaying the array elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-2d", arr[i][j]);
        }
        printf("\n");
    }
}

void sum_and_average_of_row(int arr[10][10], int rows, int cols, int sum[], float average[])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i] += arr[i][j];
        }
        average[i] = (sum[i] / (float)cols);
    }
    
    printf("Displaying array with sum and average of each row\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Sum %d: %-7d", i, sum[i]);
        printf("Average %d: %-2.2f", i, average[i]);
        printf("\n");
    }
}

int main()
{
    int arr[10][10], rows, cols, sum[10] = {0};
    float average[10];
    printf("Enter the array row size: ");
    scanf("%d", &rows);
    printf("Enter the array column size: ");
    scanf("%d", &cols);

    array_input(arr, rows, cols);
    array_output(arr, rows, cols);
    sum_and_average_of_row(arr, rows, cols, sum, average);

    return 0;
}