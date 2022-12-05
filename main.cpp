#include <iostream>
#include "spellcheck.h"
#include <string>
#include <vector>

int main(){
    //take input from user
    std::string word;

    std::cin >> word;
    std::cout << std::endl;
    
    //Call the spell check function and read the dictionary
    Spellcheck userWord(word);
    std::vector<std::string> dict = userWord.fillDictionary(); 

    Spellcheck::CreateNode* start_node = new Spellcheck::CreateNode; //create node using call to struct

    for (int i = 0; i < 1000; i++){
        if (dict[i] == word){
            std::cout << word << std::endl; //output word if single letter
            return 0;
        }
        userWord.buildTree(start_node, dict[i]); //build tree
    }

    if (userWord.inDict(start_node, word) == true){
        std::cout << word << std::endl; //output word if word is in dictionary
    }

    
    return 0;
}
