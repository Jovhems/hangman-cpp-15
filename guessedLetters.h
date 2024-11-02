//
//  guessedLetters.h
//  hangman.cpp14
//
//  Created by Jovhems Jean-Baptiste on 10/30/24.
//

#ifndef GUESSEDLETTERS_H
#define GUESSEDLETTERS_H

#include <list>
#include <string>

class GuessedLetters {
private:
    std::list<char> m_guessed;

public:
    GuessedLetters();
    std::string getLetters();
    void addLetter(char letter);
};

#endif
