//
//  gamestate.h
//  hangman.cpp15
//
//  Created by Jovhems Jean-Baptiste on 11/2/24.
//

#ifndef GAME_STATE_H
#define GAME_STATE_H

#include <vector>
#include <string>

class GameState {
private:
    int incorrectGuesses; // Track number of incorrect guesses

public:
    GameState() : incorrectGuesses(0) {}  // Initialize to 0 incorrect guesses

    void addState() {
        if (incorrectGuesses < 6) {
            ++incorrectGuesses;
        }
    }

    int getStateSize() const {
        return incorrectGuesses;
    }

    bool gameOver() const {
        return incorrectGuesses >= 6;  // Game over if max incorrect guesses reached
    }

    std::string getState() const {
        return std::to_string(incorrectGuesses);  // For debugging/logging, you might expand this to show the actual state
    }
};

#endif
