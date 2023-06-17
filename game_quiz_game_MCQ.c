// Program to create a quiz game (MCQ)

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_QUESTION 256
#define MAX_ANSWER 128

typedef struct
{
    char question[MAX_QUESTION];
    char option1[MAX_ANSWER];
    char option2[MAX_ANSWER];
    char option3[MAX_ANSWER];
    char option4[MAX_ANSWER];
    char correct_answer;
} quiz_question;

int quiz(int n)
{
    quiz_question qz[n];
    strcpy(qz[0].question, "1.What is the correct way to declare a constant in C?\n");
    strcpy(qz[0].option1, "a) const");
    strcpy(qz[0].option2, "b) #include");
    strcpy(qz[0].option3, "c) var");
    strcpy(qz[0].option4, "d) constant");
    qz[0].correct_answer = 'a';

    strcpy(qz[1].question, "2.Which of the following is a valid C variable name?\n");
    strcpy(qz[1].option1, "a) 123abc");
    strcpy(qz[1].option2, "b) _abc123");
    strcpy(qz[1].option3, "c) if");
    strcpy(qz[1].option4, "d) floa1");
    qz[1].correct_answer = 'b';

    int score = 0;
    printf("----Welcome to the quiz game----\n");
    printf("Let's begin...\n\n");

    for (int i = 0; i < n; i++)
    {
        puts(qz[i].question);
        puts(qz[i].option1);
        puts(qz[i].option2);
        puts(qz[i].option3);
        puts(qz[i].option4);
        printf("\nEnter your response: ");
        char c;
        scanf(" %c", &c);
        if (c == qz[i].correct_answer)
        {
            printf("\nCorrect!!\n\n");
            score+=1;
        }
        else
        {
            printf("\nIncorrect response...\n\n");
        }
    }

    return score;
}

int main()
{
    int n;
    printf("Enter the number of questions: ");
    scanf("%d", &n);

    if (n > 300)
    {
        printf("Currently exceeding question limit...\n");
        return 1;
    }

    int score = quiz(n);
    printf("Your Score: %d\n", score);

    return 0;
}