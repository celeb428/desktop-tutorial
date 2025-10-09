//
/*
name:caleb ngugi mburu
date:08/10/25
details:number geusing game
reg:ct100/G/26188/25
*/

#include <stdio.h>


int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0)); 
    secretNumber = (rand() % 20) + 1; 

    printf("Guess the number (between 1 and 20):\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber)
            printf("Too high\n");
        else if (guess < secretNumber)
            printf("Too low\n");
        else
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);

    } while (guess != secretNumber);

    return 0;
}


