/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO DISPLAY GEUSSING GAME
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    secretNumber = rand() % 20 + 1;  // Generates a number between 1 and 20

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it!\n");
            printf("It took you %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}