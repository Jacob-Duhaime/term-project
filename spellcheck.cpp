#include "spellcheck.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

Spellcheck::Spellcheck(std::string user_input){
    // This is the word that the user will input into the program which will be used to check for its spelling from our dictionary.
    this-> word = user_input;
}

//Function that reads the dictionary of words that will be used in order to find the word in.
void Spellcheck::fillDictionary(){

    std::ifstream inFile(fileName);
    std::string line;

    while (std::getline(inFile, line)) {
        dictionary.push_back(line);
    }
    inFile.close();
    std::cout << dictionary[5] << std::endl;
}

/*
Separate each character by node. Every node will be searching for the possible word in the dictionary. Spawn in the end node...etc
Note: Add exception handling so that it skips the mispelled word from our algorithm in order to pull the right one from the dictionary
*/
