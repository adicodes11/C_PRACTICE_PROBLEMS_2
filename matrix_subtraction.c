// Program to perform matrix subtraction

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

void matrix_output(int arr[10][10],int rows , int cols)
{
    printf("Displaying the matrix elements: \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void matrix_subtraction(int arr1[10][10],int arr2[10][10],int rows,int cols)
{
    int sub[10][10];

    matrix_output(arr1,rows,cols);
    printf(" + ");
    matrix_output(arr2,rows,cols);
    printf(" = ");

    printf("Displaying the differnce of matrices: \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            sub[i][j]= arr1[i][j]-arr2[i][j];
        }
    }
    matrix_output(sub,rows,cols);
}

int main()
{
    int arr1[10][10], arr2[10][10], rows,cols;
    printf("Enter the number of matrix rows: ");
    scanf("%d",&rows);
    printf("Enter the number of matrix cols: ");
    scanf("%d",&cols);

    matrix_input(arr1,rows,cols);
    matrix_input(arr2,rows,cols);
    matrix_subtraction(arr1,arr2,rows,cols);

    return 0;
}