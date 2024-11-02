//
//  guessedLetters.cpp
//  hangman.cpp15
//
//  Created by Jovhems Jean-Baptiste on 11/2/24.
//

#include "guessedLetters.h"

GuessedLetters::GuessedLetters() {}

std::string GuessedLetters::getLetters() {
    return std::string(m_guessed.begin(), m_guessed.end());
}

void GuessedLetters::addLetter(char letter) {
    m_guessed.push_back(letter);
}
