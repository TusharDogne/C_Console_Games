#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    int maxAttempts = 7;

    // Seed random number
    srand(time(0));
    number = rand() % 100 + 1; // 1 to 100

    printf("\n=== NUMBER GUESSING GAME ===\n");
    printf("Guess the number between 1 and 100\n");
    printf("You have %d attempts\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high.\n");
        } 
        else if (guess < number) {
            printf("Too low.\n");
        } 
        else {
            printf("\nYou guessed it right in %d attempts!\n", attempts);
            break;
        }

        printf("Attempts left: %d\n\n", maxAttempts - attempts);
    }

    if (guess != number) {
        printf("\nGame Over! The number was %d\n", number);
    }

    return 0;
}