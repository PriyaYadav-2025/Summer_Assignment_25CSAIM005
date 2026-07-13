#include <stdio.h>
int main() 
{
    int secret = 25, guess;
    printf("Guess the number (1-50): ");
    scanf("%d", &guess);
    if(guess == secret)
        printf("Correct! You guessed it.\n");
    else if(guess < secret)
        printf("Too Low.\n");
    else
        printf("Too High.\n");
    return 0;
}
