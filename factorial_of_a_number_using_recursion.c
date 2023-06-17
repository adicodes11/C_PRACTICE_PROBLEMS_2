// Program to calculate factorial of a number using recursion

#include<stdio.h>

long long int factorial(long long int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(void)
{
    long long int n;    // bade numbers jaise k 13 k liye int store nahi kr payega result and na hi size_t issliye long long int use kiya
    printf("Enter the number: ");
    scanf("%lld", &n);

    long long int fact = factorial(n);
    printf("Factorial of %lld is %lld\n", n, fact);

    return 0;
}
