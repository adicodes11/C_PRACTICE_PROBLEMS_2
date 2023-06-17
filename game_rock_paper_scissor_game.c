// Program to implement the Rock Paper Scissors game

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int random_number_generator()
{
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    char player_choice[10], computer_choice[10], cont;
    int tries, score, random_number;

    printf("Welcome to the Rock Paper Scissors Game\n");

    while (1)
    {
        tries = 5;
        score = 0;
        do
        {
        enter_valid:
            printf("\nRemaining tries: %d\n", tries);
            printf("Choose >> rock paper scissors: ");
            scanf("%s", &player_choice);

            random_number = random_number_generator();

            if (random_number == 0)
            {
                strcpy(computer_choice, "rock");
            }
            else if (random_number == 1)
            {
                strcpy(computer_choice, "paper");
            }
            else if (random_number == 2)
            {
                strcpy(computer_choice, "scissors");
            }

            printf("Your choice: %s\nComputer's choice: %s\n", player_choice, computer_choice);
            // Game Logic
            if (strcmp(player_choice, computer_choice) == 0)
            {
                printf("Draw!!\n");
                printf("Your score: %d\n", score);
            }
            else if ((strcmp(player_choice, "rock") == 0) && (strcmp(computer_choice, "paper") == 0))
            {
                printf("You loose\n");
                printf("Your score: %d\n", score);
            }
            else if ((strcmp(player_choice, "rock") == 0) && (strcmp(computer_choice, "scissors") == 0))
            {
                printf("You Win!!\n");
                score += 100;
                printf("Your score: %d\n", score);
            }
            else if ((strcmp(player_choice, "paper") == 0) && (strcmp(computer_choice, "scissors") == 0))
            {
                printf("You loose\n");
                printf("Your score: %d\n", score);
            }
            else if ((strcmp(player_choice, "paper") == 0) && (strcmp(computer_choice, "rock") == 0))
            {
                printf("You Win!!\n");
                score += 100;
                printf("Your score: %d\n", score);
            }
            else if ((strcmp(player_choice, "scissors") == 0) && (strcmp(computer_choice, "rock") == 0))
            {
                printf("You loose\n");
                printf("Your score: %d\n", score);
            }
            else if ((strcmp(player_choice, "scissors") == 0) && (strcmp(computer_choice, "paper") == 0))
            {
                printf("You Win!!\n");
                score += 100;
                printf("Your score: %d\n", score);
            }
            else
            {
                printf("Enter a valid choice...\n");
                goto enter_valid;
            }
            tries--;
        } while (tries > 0);
        printf("Your final score: %d\n", score);
        if (score >= 300)
        {
            printf("*******YOU WON********\n");
        }
        else
        {
            printf("-----YOU LOOSE-----\n");
        }
        printf("Play again (y/n): ");
        scanf(" %c", &cont);
        if (cont == 'n' || cont == 'N')
        {
            exit(0);
        }
    }

    return 0;
}