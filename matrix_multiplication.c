// Program to implement the matrix multiplication

#include <stdio.h>
#include <stdlib.h>

void matrix_input(int matrix[10][10], int rows, int cols)
{
    printf("Enter the matrix elements: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrix_output(int matrix[10][10], int rows, int cols)
{
    printf("\nDisplaying the matrix:\n\n");

    for (int i = 0; i < rows; i++)
    {
        printf("| ");
        for (int j = 0; j < cols; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("    |\n");
    }
}

void matrix_multiplication(int matrix1[10][10], int r1, int c1, int matrix2[10][10], int r2, int c2, int product[10][10])
{
    if (c1 != r2)
    {
        printf("Dimension ERROR\n");
        exit(0);
    }

    // r1 and c2 will be the dimensions of the product matrix

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    matrix_output(product, r1, c2);
}

int main()
{
    int matrix1[10][10], matrix2[10][10], product[10][10] = {0};
    int r1, c1, r2, c2;
    printf("Enter the matrix 1 dimensions: ");
    scanf("%d %d", &r1, &c1);
    matrix_input(matrix1, r1, c1);

    printf("Enter the matrix 2 dimensions: ");
    scanf("%d %d", &r2, &c2);
    matrix_input(matrix2, r2, c2);

    matrix_multiplication(matrix1, r1, c1, matrix2, r2, c2, product);

    return 0;
}