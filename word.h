//
//  word.h
//  hangman.cpp15
//
//  Created by Jovhems Jean-Baptiste on 11/2/24.
//

#ifndef WORD_H
#define WORD_H

#include <string>
#include <list>

class Word {
private:
    std::list<char> m_currentWord;  // List representing the guessed word progress
    std::string m_word;             // Actual word to guess

public:
    Word(std::string word);
    std::string getWord();  // Returns current progress of the word
    void addLetter(char letter);  // Replace underscores with correct letters
    bool findLetter(char letter);  // Check if letter is in the word
    bool solved();  // Check if the word is fully guessed
};

#endif
