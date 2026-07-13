#include <stdio.h>
int main()
{
    int n, i, ans, correct, score = 0;
    char question[100];
    printf("Enter number of questions: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("\nEnter question %d: ", i);
        scanf(" %[^\n]", question);

        printf("Enter correct option number (1-4): ");
        scanf("%d", &correct);

        printf("Question: %s\n", question);
        printf("Enter your answer: ");
        scanf("%d", &ans);

        if(ans == correct)
        {
            score++;
            printf("Correct!\n");
        }
        else
        {
            printf("Wrong!\n");
        }
    }
    printf("\nYour final score is %d/%d", score, n);
    return 0;
}
