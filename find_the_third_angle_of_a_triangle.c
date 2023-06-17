// Program to compute the third angle of a triangle

#include<stdio.h>

float angle_calculator(float a, float b)
{
    return 180-a-b;
}

int main()
{
    float a,b,c;
    printf("Enter any two angles of a triangle: ");
    scanf("%f %f",&a,&b);

    c = angle_calculator(a,b);
    printf("The third angle of the triangle is: %.1f\n",c);
    printf("Angles are: %.1f  %.1f  %.1f  \n",a,b,c);

    return 0;
}