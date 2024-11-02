//
//  gamestate.cpp
//  hangman.cpp14
//
//  Created by Jovhems Jean-Baptiste on 10/30/24.
//

// gameState.h

#include <vector>
#include <string>

class GameState {
private:
    std::vector<std::string> stateList;  // or use an int counter if not using list

public:
    GameState() {
        // Initialize with the 7 stages for hangman if using a vector
        stateList = {"PLATFORM", "HEAD", "BODY", "LEFT_ARM", "RIGHT_ARM", "LEFT_LEG", "RIGHT_LEG"};
    }

    void addState() {
        if (stateList.size() < 7) {  // Ensure no overflow
            stateList.push_back("next state");
        }
    }

    int getStateSize() const {
        return stateList.size();  // Return current size
    }

    bool gameOver() const {
        return stateList.size() >= 7;  // Game over if hangman is complete
    }

    std::string getState() const {
        std::string result;
        for (const auto& stage : stateList) {
            result += stage + " ";
        }
        return result;
    }
};
