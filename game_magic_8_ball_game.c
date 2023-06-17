// Program to implement the magic 8 ball game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

int random_number_generator()
{
    srand(time(NULL));
    return rand() % 10;
}

int main()
{
    char *responses[] = {
        "Outlook is uncertain, try again later.",
        "Signs point to yes, but don't rely on it too heavily.",
        "Better not tell you now.",
        "My sources say no, so don't get your hopes up.",
        "Ask again in a different way, and you might get a clearer answer.",
        "Seems so but don't loose hopes.",
        "Without a doubt, things are looking up!",
        "Cannot predict now, as the future is constantly changing.",
        "Most likely, but be prepared for unexpected twists.",
        "Don't count on it, the odds are not in your favor."
    };
    char question[100];
    int ask_again;
    printf("Welcome to the Magic 8 Ball Game\n\n");
    
    do
    {
        printf("Enter your question: ");
        fgets(question,100,stdin);

        //Random number generation method 2     // sort of unfair hai bcz same sequence of character k liye same response dega magic 8 ball
        // int slen = strlen(question), total = 0, answer = 0;
        // for(int i=0;i<slen;i++)
        // {
        //     total += question[i];       // adding the ASCII values of all the characters in question
        // }
        // answer = total % 10;
        // printf("Magic 8 Ball says %s\n",responses[answer]);

        printf("Magic 8 Ball says: %s\n",responses[random_number_generator()]);

        printf("Press 1 to ask again: ");
        scanf("%d",&ask_again);
        getchar();  // this will clear the input buffer and consume the \n character left in the input buffer after we enter the value of ask_again and hit enter i.e add \n to the input buffer
    } while (ask_again!=0);

    printf("Hope you enjoyed :)\n");
    
    return 0;
}