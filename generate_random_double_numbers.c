// Program to generate random double numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double random_double_generator()
{
    return ((double) rand()) / 7;
}

int main()
{
    srand(time(NULL));
    int n;
    double arr[100];
    printf("Enter the number of random numbers to be generated: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = random_double_generator();
    }

    printf("Displaying the randomly generated numbers: ");
    for (int i = 0; i < n; i++)
    {
        printf("%-20lf", arr[i]);
    }

    return 0;
}