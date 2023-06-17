// Program to perform matrix addition

#include <stdio.h>

void matrix_input(int arr[10][10], int rows, int cols) // 2d arrays atleast one dimension se hi pass kiye ja skte hai function mein
{
    printf("Enter the matrix elements: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void matrix_output(int arr[10][10], int rows, int cols)
{
    printf("Displaying the matrix elements: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void matrix_addition(int arr1[10][10], int arr2[10][10], int rows, int cols)
{
    int sum[10][10];

    printf("Displaying the sum of matrices: \n");
    matrix_output(arr1, rows, cols);
    printf(" + ");
    matrix_output(arr2, rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf(" = ");
    matrix_output(sum, rows, cols);
}

int main()
{
    int arr1[10][10], arr2[10][10], rows, cols;
    printf("Enter the number of matrix rows: ");
    scanf("%d", &rows);
    printf("Enter the number of matrix columns: ");
    scanf("%d", &cols);

    matrix_input(arr1, rows, cols);
    matrix_input(arr2, rows, cols);
    matrix_addition(arr1, arr2, rows, cols);

    return 0;
}