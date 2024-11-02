//
//  word.cpp
//  hangman.cpp15
//
//  Created by Jovhems Jean-Baptiste on 11/2/24.
//

#include "word.h"
#include <algorithm>

Word::Word(std::string word) : m_word(word) {
    for (char c : word) {
        m_currentWord.push_back('_');  // Initialize with underscores
    }
}

std::string Word::getWord() {
    return std::string(m_currentWord.begin(), m_currentWord.end());
}

void Word::addLetter(char letter) {
    int index = 0;
    for (char c : m_word) {
        if (c == letter) {
            auto it = std::next(m_currentWord.begin(), index);
            *it = letter;  // Replace underscore with the correct letter
        }
        ++index;
    }
}

bool Word::findLetter(char letter) {
    return std::find(m_word.begin(), m_word.end(), letter) != m_word.end();
}

bool Word::solved() {
    return std::equal(m_currentWord.begin(), m_currentWord.end(), m_word.begin());
}
