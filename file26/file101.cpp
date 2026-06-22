//Write a program to Create number guessing game.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int secretNumber = rand() % 100 + 1; 
    int guess, attempts = 0;

    cout << "=== Number Guessing Game ===\n";
    cout << "Guess a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } 
        else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } 
        else {
            cout << "Congratulations! You guessed the number in "
                 << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}