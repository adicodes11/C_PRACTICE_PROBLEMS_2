// Program to calculate the factorial of a number using loop

#include<stdio.h>

long long int factorial(int n)
{
    long long int fact = 1;
    for(int i =1;i<=n;i++)
    {
        fact *= i;
    }
    
    return fact;
}

int main()
{
     int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    long long int fact = factorial(n);
    printf("The factorial of %d is %lld\n",n,fact);

    return 0;
}