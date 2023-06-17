// Program to print the fibonacci series

#include <stdio.h>

void fibonacci_generator(int terms)
{
    int a = 0, b = 1, sum = 0;

    printf("%d %d ",a,b);
    for(int i=2;i<terms;i++)
    {
        sum = a+b;
        printf("%d ",sum);
        a = b;
        b = sum;
    }
}

int main()
{
    int n;
    printf("Enter the number of terms to be generated: ");
    scanf("%d", &n);

    fibonacci_generator(n);

    return 0;
}