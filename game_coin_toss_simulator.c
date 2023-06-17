// Coin toss simulator game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int toss()
{
    srand(time(NULL));
    return rand() % 2;
}

int main()
{
    int start;
    printf("Welcome to the coin toss simulator...\n");

    do
    {
        printf("To toss the coin press 1: ");
        scanf("%d",&start);
        if(start == 1)
        {
            if(toss()==0)
            {
                printf("Its tails\n");
            }
            else
            {
                printf("Its heads\n");
            }
            start = 0;
        }
        else
        {
            printf("Stopping!!\n");
            break;  
        }
    } while (start!=1);
    
    

    return 0;
}