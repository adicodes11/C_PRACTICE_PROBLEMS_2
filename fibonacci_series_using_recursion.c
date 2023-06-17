// Program to print the fibonacci series using recursio n

#include <stdio.h>

int fibonacci_generator(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci_generator(n - 1) + fibonacci_generator(n - 2);
}

int main()
{
    int n;
    printf("Enter the number of terms to be generated: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci_generator(i));
    }

    return 0;
}