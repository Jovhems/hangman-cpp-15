//
//  main.cpp
//  hangman.cpp15
//
//  Created by Jovhems Jean-Baptiste on 11/2/24.
//

#include <iostream>
#include "word.h"
#include "guessedLetters.h"
#include "gameState.h"
using namespace std;

void displayHangman(const GameState& state) {
    string hangman[] = {
        "  +---+\n      |\n      |\n      |\n     ===",
        "  +---+\n  O   |\n      |\n      |\n     ===",
        "  +---+\n  O   |\n  |   |\n      |\n     ===",
        "  +---+\n  O   |\n /|   |\n      |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n      |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n /    |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n / \\  |\n     ==="
    };
    cout << hangman[state.getStateSize()] << endl;  // Access the correct hangman stage
}
   

int main() {
    Word word("JUGGLE");
    GuessedLetters guessed;
    GameState state;
    char letter;

    cout << "Welcome to Hangman! Try to guess the word before the hangman is complete!" << endl;

    do {
        displayHangman(state);  // Display the hangman progress
        cout << "Game state: " << state.getState() << endl;
        cout << "Guessed letters: " << guessed.getLetters() << endl;
        cout << "Guess this word: " << word.getWord() << endl << endl;

        cout << "Guess a letter: ";
        cin >> letter;
        letter = toupper(letter);

        if (!isalpha(letter)) {
            cout << "Invalid input! Please enter an alphabetic character." << endl;
            continue;
        }

        if (guessed.getLetters().find(letter) != string::npos) {
            cout << "You already guessed that letter!" << endl;
            continue;
        }

        if (word.findLetter(letter)) {
            word.addLetter(letter);
            cout << "Good guess!" << endl;
        } else {
            guessed.addLetter(letter);
            state.addState();
            cout << "Wrong guess! Try again." << endl;
        }

    } while (!state.gameOver() && !word.solved());

    if (state.gameOver()) {
        displayHangman(state);
        cout << "Sorry, you lost! The word was: JUGGLE" << endl;
    } else {
        cout << "Congratulations! You guessed the word: " << word.getWord() << endl;
    }

    return 0;
}
