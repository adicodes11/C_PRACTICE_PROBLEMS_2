// Program to generate random double numbers within in a specified range

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double random_number_generator(double min, double max)
{
    double random = ((double)rand()) / RAND_MAX; // yeh 0 - 1 hi value dega
    double range = (max - min) * random;         // range ho jayegi 0 to (max - min)
    double number = min + range;                 // range ho jayegi min to max

    return number;
}

int main()
{
    srand(time(NULL));
    double arr[100], min, max;
    int n;
    printf("Enter the number of random double numbers to be generated: ");
    scanf("%d", &n);
    printf("Enter min: ");
    scanf("%lf", &min);
    printf("Enter max: ");
    scanf("%lf", &max);

    for (int i = 0; i < n; i++)
    {
        arr[i] = random_number_generator(min, max);
    }

    printf("Displaying the generated numbers: ");
    for (int i = 0; i < n; i++)
    {
        printf("%-20lf", arr[i]);
    }

    return 0;
}