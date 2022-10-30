#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = { "Question 1",
                             "Question 2",
                             "Question 3" };

    char options[][100] = { "A wrong", "B correct", "C wrong", "D wrong",
                           "A wrong", "B wrong", "C wrong", "D correct",
                           "A correct", "B wrong", "C wrong", "D wrong" };

    char answers[] = { 'B', 'D', 'A' };
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score=0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("*********************\n");
        printf("%s\n", questions[i]);
        printf("*********************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf_s(" %c", &guess);

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG!\n");
        }
    }
    printf("*********************\n");
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("*********************\n");

    return 0;
}
