#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}


void playGame() {
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;

    srand(time(0));
    int secretNumber = generateRandomNumber(1, 100);
    int guess;
    int attempts = 0;

    while (true) {
        cout << "Guess the number: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly!" << endl;
            cout << "It took you " << attempts << " attempts." << endl;
            break;
        }
    }
}

int main() {
    playGame();
    return 0;
}
