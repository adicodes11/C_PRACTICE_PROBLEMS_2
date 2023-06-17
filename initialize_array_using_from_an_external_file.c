// Program to initialize an array with include directive and external file

#include<stdio.h>

int main()
{
    int arr[10]= {
        #include "myfile.txt"
        };

        printf("Printing 1D array: ");
        for(int i = 0;i< 10;i++)
        {
            printf("%d ",arr[i]);
        }

        // Also 2D array can be initialized
        int arr1[2][5] = {
            #include "myfile.txt"
        };

        printf("\nPrinting 2D array: ");
        for(int i = 0;i< 2;i++)
        {
            for(int j = 0;j< 5;j++)
            {
                printf("%d ",arr1[i][j]);
            }
        }

    return 0;
}