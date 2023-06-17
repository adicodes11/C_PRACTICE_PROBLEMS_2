// Program to take user input for a 2D array

#include<stdio.h>

void matrix_input(int arr[10][10],int rows,int cols)
{
    printf("Enter the matrix elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void matrix_output(int arr[10][10],int rows,int cols)
{
    printf("Displaying the matrix: \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr1[10][10],rows,cols;
    printf("Enter the number of matrix rows: ");
    scanf("%d",&rows);
    printf("Enter the number of matrix columns: ");
    scanf("%d",&cols);

    matrix_input(arr1,rows,cols);
    matrix_output(arr1,rows,cols);

    return 0;
}