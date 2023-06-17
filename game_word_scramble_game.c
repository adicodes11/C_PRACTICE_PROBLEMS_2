// Program to implement the word scramble game

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void scramble(char word[], char guess[], char scrambled[])
{
    int slen = strlen(word), rn, arr[20];
    srand(time(NULL));
    bool unique;

    for (int i = 0; i < slen; i++)
    {
        do
        {
            unique = true;
            rn = rand() % slen;
            for (int j = 0; j < i; j++)
            {
                if (rn == arr[j])
                {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
        arr[i] = rn;
        scrambled[rn] = word[i];
    }
    printf("Scrambled word: %s\n", scrambled);
    printf("Enter your answer: ");
    fgets(guess, 20, stdin);
    guess[strlen(guess) - 1] = '\0';
}

int main()
{
    char word[20], scrambled[20] = "", guess[20];
    printf("Enter the word: ");
    fgets(word, 20, stdin);
    word[strlen(word) - 1] = '\0';

    scramble(word, guess, scrambled);
    do
    {

        if (strcmp(word, guess) == 0)
        {
            printf("Wow that's a great guess!!\n");
            break;
        }
        else
        {
            printf("Try again...\n");
            scramble(word, guess, scrambled);
        }
    } while (true);

    return 0;
}