#include "spellcheck.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


//Calling the class. This function is the one that handles the user input for the word that they want to spell check
Spellcheck::Spellcheck(std::string user_input){
    // what the fortnite
    this-> word = user_input;
}

//Function that reads the dictionary provided to the program
std::vector<std::string> Spellcheck::fillDictionary(){
    std::vector<std::string> dictionary;
    std::ifstream inFile(fileName);
    std::string line;

    while (std::getline(inFile, line)) {
        dictionary.push_back(line); //get file and put it into dictonary vector
    }
    inFile.close();
    //std::cout << dictionary[5] << std::endl;
    return dictionary;
}

//Builds the tree to find the word
void Spellcheck::buildTree(Spellcheck::CreateNode* start_node, std::string segment){
    Spellcheck::CreateNode* current =  start_node;
    for (int i = 0; i < segment.length(); i++){
        if (current->branch[segment[i]] == NULL){
            current->branch[segment[i]] = new Spellcheck::CreateNode();
            //std::cout << segment[i] << std::endl;
        }

        current = current->branch[segment[i]];
    }

    current->flag = true;
}

//Check if the word typed or the posibility is IN the dictionary
bool Spellcheck::inDict(Spellcheck::CreateNode* start_node, std::string ans){
    for (int i = 0; i < word.length(); i++){
        if (start_node->branch[ans[i]] == NULL){
            Spellcheck::posibilities(start_node, ans.substr(0, i));
            return false;
        }

        start_node = start_node->branch[ans[i]];
    }
    if (start_node->flag == true){
        return true;
    }

    Spellcheck::posibilities(start_node, ans); //call to function

    return false;
}

//Function that returns the possible words from the dictionary
void Spellcheck::posibilities(Spellcheck::CreateNode* start_node, std::string ans){
    if (start_node->flag == true){
        std::cout << ans << std::endl;
    }
    for (int i = 0; i < 256; i++){
        if (start_node->branch[i] == NULL){
            // do nothing
        }
        else{
            ans.push_back(i);
            Spellcheck::posibilities(start_node->branch[i], ans);
            ans.pop_back();
        }
    }
}
