#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int guess,val;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;
    do{
        int secretNumber = rand() % 100 + 1;
            int attempts = 0;
        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;
            if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else if (guess > secretNumber) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
                cout<<"Play Again! 1=yes or 2=no: \n";
                cin>>val;
            }
        } while (guess != secretNumber);
    } while (val!=2);
    return 0;
}
