
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_NAME_LENGTH 20

// List of names to choose from
char *names[] = {"Sonu", "Kale", "Ankit", "Parasanna", "William", "Olivia", "James", "Ava", "George", "Isabella"};

int main() {
    char guess[MAX_NAME_LENGTH];
    char *name;
    int attempts = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Choose a random name from the list
    name = names[rand() % 10];

    printf("Welcome to the name guessing game!\n");
    printf("I'm thinking of a name. Try to guess it!\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%s", guess);

        attempts++;

        if(strcmp(guess, name) == 0) {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        } else {
            printf("Sorry, that's not it. Try again!\n");
        }
    }

    return 0;
}
