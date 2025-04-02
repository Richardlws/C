#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0)); // uses the current time as a seed

    answer = rand() % MAX + MIN; // generate a random number between MIN&MAX

    //printf("%d\n", answer);
    printf("***************************\n");
    printf("You have 10 times to guess!\n");
    printf("***************************\n");
    do
    {
        
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess < answer)
        {
            printf("Too low!\n");
        }
        else if (guess > answer)
        {

            printf("Too high!\n");
        }
        else
        {
            printf("Correct!\n");
        }

        guesses ++;

        if (guesses > 9)
        {
            printf("**********************\n");
            printf("Oops! You Fail!\n");
            break;
        }

        
    } while (guess != answer);

    printf("**********************\n");
    printf("answer: %d\n",answer);
    printf("guesses:%d\n",guesses);
    printf("**********************\n");

    return 0;
}