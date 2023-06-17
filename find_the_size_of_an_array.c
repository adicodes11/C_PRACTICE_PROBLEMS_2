// Program to find the size of an array

#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 0, 7, 5, 4, 3};

    printf("The size of the array is: %d\n",ARRAY_SIZE(arr));

    return 0;
}