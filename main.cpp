#include "spellcheck.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

Spellcheck::Spellcheck(std::string user_input){
    // what the fortnite
    this-> word = user_input;
}

void Spellcheck::fillDictionary(){

    std::ifstream inFile(fileName);
    std::string line;

    while (std::getline(inFile, line)) {
        dictionary.push_back(line);
    }
    inFile.close();
    std::cout << dictionary[5] << std::endl;
}

//Add a print result function which will return the words from the dictionary that might match the spelling
