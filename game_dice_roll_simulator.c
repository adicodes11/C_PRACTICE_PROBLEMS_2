// Program to build a dice roll simulator

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generate_rand()
{
    srand( time(NULL) );
    return rand() % 7;
}

int main()
{
    int cont ;

    do
    {
        printf("Roll: ");
        getchar();
        printf("%d\n",generate_rand());
        // printf("Continue ? yes/no (1/0): ");
        // scanf("%d",&cont);
    } while (1);
    

    return 0;
}