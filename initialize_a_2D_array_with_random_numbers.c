// Program to initialize a 2D array with random numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number_generator()
{
    return rand() % 100;
}

int main()
{
    srand(time(NULL));  //srand main function k andr seed krna padega q ki hum initialization main function k andr kr rhe hai 
    int arr[10][10], rows, cols;

    printf("Enter the array row size: ");
    scanf("%d", &rows);
    printf("Enter the array column size: ");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = random_number_generator();
        }
    }

    printf("Displaying the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-5d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}