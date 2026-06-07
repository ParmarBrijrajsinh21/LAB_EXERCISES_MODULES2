//33.• Write a C program that implements a simple number guessing game. The program should generate

#include <stdio.h>
int main()
{
    int randomNumber, guess;
    int attempts = 0, maxAttempts = 10;
    srand(time(0));
    randomNumber = rand() % 100 + 1;
    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");
    printf("You have %d attempts.\n\n", maxAttempts);
    while(attempts < maxAttempts)
    {
        printf("Attempt %d: Enter your guess: ",
               attempts + 1);
        scanf("%d", &guess);
        attempts++;
        if(guess == randomNumber)
        {
            printf("Congratulations! You guessed the number correctly.\n");
            printf("Total attempts used: %d\n", attempts);
            return 0;
        }
        else if(guess < randomNumber)
        {
            printf("Too Low! Try again.\n");
        }
        else
        {
            printf("Too High! Try again.\n");
        }
    }
    printf("\nGame Over!\n");
    printf("The correct number was %d\n", randomNumber);
} 

//Challenge: Enhanced Version with Hints
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess;
    int attempts = 0;
    int maxAttempts = 10;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("=== Number Guessing Game ===\n")
    printf("Guess a number between 1 and 100\n");
    while(attempts < maxAttempts)
    {
        printf("\nAttempt %d: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;
        if(guess == number)
        {
            printf("Correct! You won in %d attempts.\n",attempts);
            break;
        }
        if(guess > number)
    	printf("Hint: Too High!\n");
        else
        printf("Hint: Too Low!\n");
        if(abs(guess - number) <= 5)
        printf("Very Close!\n");
    }
    if(attempts == maxAttempts && guess != number)
    {
        printf("\nYou Lost!\n");
        printf("The number was %d\n", number);
    }
}
