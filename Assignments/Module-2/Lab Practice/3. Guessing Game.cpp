#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ATTEMPTS 5  
main() 
{
    int secretNumber, guess, attempts = 0;
    
    srand(time(0));
    secretNumber = (rand() % 100) + 1; 
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");
    printf("You have %d attempts.\n\n", MAX_ATTEMPTS);
    
    while (attempts < MAX_ATTEMPTS) 
	{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        
        attempts++;
        
        if (guess == secretNumber)
		 {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0;
        } 
		else if (guess < secretNumber)
		 {
            printf("Too low! Try again.\n");
        } 
		else 
		{
            printf("Too high! Try again.\n");
        }
        
        printf("Attempts remaining: %d\n\n", MAX_ATTEMPTS - attempts);
    }
    
    printf("Sorry, you've run out of attempts! The correct number was %d.\n", secretNumber);
    return 0;
}
