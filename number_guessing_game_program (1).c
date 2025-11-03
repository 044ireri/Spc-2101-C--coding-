#include <stdio.h>

int main() {
    int secretNumber, guess, attempts = 0;
    srand(time(NULL));
    secretNumber = (rand() % 20) + 1;
    printf("Welcome for a bet!\n");
    printf("choose a number between 1 and 20.\n");
    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        // Clear the screen (use "cls" "clear" )
        #ifdef _win 32
            system("cls");
        else
            system("clear");
        #endif
        if (guess > secretNumber) {
            printf("Too high!\n");
        }
        else if (guess < secretNumber) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations! You guessed the correct number.\n");
        }
    }
    while (guess != secretNumber);
    return 0;
}    