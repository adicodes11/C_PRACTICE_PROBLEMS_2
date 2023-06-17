#include<stdio.h>


int main()
{
    int a,b;

    // Arithmetic Operators

    a = 13, b = 40;

    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a%%b=%d\n",a%b);
    printf("++a=%d\n++b=%d\n",++a,++b);
    printf("--a=%d\n--b=%d\n",--a,--b);

    // Assignment Operators

    a = 13, b = 40;

    printf("a=b=%d\n",a=b);
    printf("a+=40  %d\n",a+=40);
    printf("a-=40  %d\n",a-=40);
    printf("a*=40  %d\n",a*=40);
    printf("a/=40  %d\n",a/=40);
    printf("a%%=40  %d\n",a%=40);
    printf("a&=40  %d\n",a&=40);
    printf("a!=40  %d\n",a!=40);
    printf("a^=40  %d\n",a^=40);
    printf("a>>=40  %d\n",a>>=40);
    printf("a<<=40  %d\n",a<<=40);

    // Relational/Comparison Operator

    a = 13, b = 40;

    printf("a>b  %d\n",a>b);
    printf("a<b  %d\n",a<b);
    printf("a>=b  %d\n",a>=b);
    printf("a<=b  %d\n",a<=b);
    printf("a==b  %d\n",a==b);
    printf("a!=b  %d\n",a!=b);

    // Logical Operators

    a = 13, b = 40;

    printf("a&&b=%d\n",a&&b);
    printf("a||b=%d\n",a||b);
    printf("!a=%d\n",!a);

    // Bitwise Operators

    a =  13 , b = 40;

    printf("a&b=%d\n",a&b);
    printf("a|b=%d\n",a|b);
    printf("~a=%d\n",~a);
    printf("a^b=%d\n",a^b);

    // Miscellaneous Operator

    a = 13 , b = 40;

    a==b ? printf("True\n") : printf("False\n");
    printf("sizeof(int)=%d\n",sizeof(int));
    printf("sizeof(float)=%d\n",sizeof(float));
    printf("sizeof(char)=%d\n",sizeof(char));
    printf("sizeof(double)=%d\n",sizeof(double));
    printf("&a=%d\n&b=%d\n",&a,&b);
    
    int *ptr1= &a, *ptr2= &b;
    printf("*ptr1=%d\n*ptr2=%d\n",*ptr1,*ptr2);



    return 0;
}