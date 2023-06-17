// Program to implement the sharing of global variable using extern keyword

#include<stdio.h>

float PI = 3.141592;   // initializing the global variable ---> thus no space is allocated

void add()
{
    PI++;
}

void print()
{
    printf("The current value of PI is %f\n",PI);
}