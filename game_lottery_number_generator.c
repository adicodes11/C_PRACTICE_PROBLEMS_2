// Program to generate a lottery number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int lottery_numbers[6];
    int num;
    bool unique; // i want to generate 6 random numbers in range 1-100 and store it in the above array

    srand(time(NULL));

    for (int i = 0; i < 6; i++)
    {
        do
        {
            unique = true;
            num = (rand() % 100) + 1;
            for (int j = 0; j < i; j++)
            {
                if (lottery_numbers[j] == num)
                {
                    unique = false;
                }
            }
        } while (!unique);  // unique true hone pr hi next iteration pr jayega
        lottery_numbers[i] = num;
        printf("lottery_numbers[%d]: %d\n", i, lottery_numbers[i]);
    }

    return 0;
}