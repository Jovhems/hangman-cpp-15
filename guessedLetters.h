//
//  guessedLetters.h
//  hangman.cpp15
//
//  Created by Jovhems Jean-Baptiste on 11/2/24.
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
