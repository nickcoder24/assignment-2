#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    int maxAttempts = 7;

    
    srand(time(0));
    number = rand() % 100 + 1; 

    printf("Guess the number between 1 and 100.\n");
    printf("You have %d attempts.\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("?? Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        } 
        else if (guess > number) {
            printf("Too high! Try again.\n");
        } 
        else {
            printf("Too low! Try again.\n");
        }

        if (attempts == maxAttempts) {
            printf("? Game Over! The number was %d.\n", number);
        }
    }

    return 0;
}
