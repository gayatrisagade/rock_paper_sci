/*
Task: Rock-Paper-Scissors Game

Description: Implement a simple rock-paper-
scissors game. Prompt the user to choose either
rock, paper, or scissors, and generate a random
choice for the computer. Determine the winner
based on the game rules and display the result.
*/

//Program

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed for random number generation
    srand(time(0));

    // Array of choices
    string choices[] = {"rock", "paper", "scissors"};

    // Prompt the user to choose
    cout << "Enter your choice (rock, paper, or scissors): ";
    string userChoice;
    cin >> userChoice;

    // Validate user input
    if (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
        cout << "Invalid choice. Please choose rock, paper, or scissors." << endl;
        return 1;
    }

    // Generate random choice for the computer
    int computerChoiceIndex = rand() % 3;
    string computerChoice = choices[computerChoiceIndex];

    // Display the computer's choice
    cout << "Computer chose: " << computerChoice << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "rock" && computerChoice == "scissors") ||
               (userChoice == "paper" && computerChoice == "rock") ||
               (userChoice == "scissors" && computerChoice == "paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}


/*
Output:

Enter your choice (rock, paper, or scissors): scissors
Computer chose: rock
Computer wins!
*/

