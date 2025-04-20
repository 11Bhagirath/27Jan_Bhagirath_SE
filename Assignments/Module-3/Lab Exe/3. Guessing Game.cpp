#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

main() 
{
    int secretNumber, guess;

    // Generate a random number between 1 and 100
    srand(time(0));  // Seed the random number generator
    secretNumber = rand() % 100 + 1;

    cout << "Guess a number between 1 and 100:\n";

    do 
	{
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) 
		{
            cout << "Too high! Try again.\n";
        } 
		else if (guess < secretNumber)
		{
            cout << "Too low! Try again.\n";
        } 
		else 
		{
            cout << "Congratulations! You guessed the number!\n";
        }
    } while (guess != secretNumber);
}

