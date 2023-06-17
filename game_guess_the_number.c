// Guess the number    Lucky number 7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lucky_number_7()
{
    srand(time(NULL));
    return rand() % 8;
}

int main()
{
    int guess, score = 0, n_choice = 7, stop = 1;

    printf("Welcome to lucky number 7...\nAre you ready...let's get into it\n");

    do
    {
        do
        {
            printf("\nEnter your guess: ");
            scanf("%d", &guess);
            int ln7 = lucky_number_7();

            if (guess == ln7 && ln7 == 7)
            {
                printf("Woohoo!!! It's %d\n", ln7);
                score += 1000;
            }
            else if (guess == ln7 && ln7 != 7)
            {
                printf("It's %d\n", ln7);
                score += 100;
            }
            else
            {
                printf("It's %d\n", ln7);
            }

            n_choice--;
        } while (n_choice != 0);

        if (score >= 600)
        {
            printf("Lucky Lucky Lucky!!\nYour score: %d\n", score);
        }
        if (score >= 300)
        {
            printf("Wow that's a good score\nYour score: %d\n\n", score);
        }
        if (score >= 100)
        {
            printf("Those were the close calls\nYour score: %d\n\n", score);
        }
        if (score < 100)
        {
            printf("\nIt's not over yet, better luck next time\nYour score: %d\n\n", score);
        }

        printf("To play again press 1");
        scanf("%d", &stop);
    } while (stop != 0);

    return 0;
}