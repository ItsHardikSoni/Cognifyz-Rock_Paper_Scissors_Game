#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    string userChoice, computerChoice;
    int computerMove;

    // Seed random number generator
    srand(time(0));

    // Prompt the user for their choice
    cout << "Choose rock, paper, or scissors: ";
    cin >> userChoice;

    // Generate a random number between 0 and 2 for the computer's choice
    computerMove = rand() % 3;

    // Assign the computer's move based on the random number
    if (computerMove == 0) {
        computerChoice = "rock";
    } else if (computerMove == 1) {
        computerChoice = "paper";
    } else {
        computerChoice = "scissors";
    }

    // Display the computer's choice
    cout << "Computer chose: " << computerChoice << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "rock" && computerChoice == "scissors") ||
               (userChoice == "scissors" && computerChoice == "paper") ||
               (userChoice == "paper" && computerChoice == "rock")) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
