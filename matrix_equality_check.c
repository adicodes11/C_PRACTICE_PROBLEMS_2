// Program to perform matrix equality check

#include<stdio.h>
#include<stdbool.h>

void matrix_input(int arr[10][10],int rows, int cols)
{
    printf("Enter the array elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

bool matrix_equality_checker(int arr1[10][10],int arr2[10][10],int rows,int cols)
{
    printf("Performing matrix equality check:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr1[i][j]!=arr2[i][j])
            {
                return false;
            }
        }
    }
    
    return true;
}

int main()
{
    int arr1[10][10],arr2[10][10],rows,cols;
    printf("Enter the number of matrix rows: ");
    scanf("%d",&rows);
    printf("Enter the number of matrix columns: ");
    scanf("%d",&cols);

    matrix_input(arr1,rows,cols);
    matrix_input(arr2,rows,cols);
    if(matrix_equality_checker(arr1,arr2,rows,cols))
    {
        printf("Matrices are equal\n");
    }
    else
    {
        printf("Matrices are not equal\n");
    }

    return 0;
}