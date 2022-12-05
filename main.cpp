#include <iostream>
#include "spellcheck.h"
#include <string>
#include <vector>

int main(){
    std::string word;

    std::cin >> word;
    std::cout << std::endl;

    Spellcheck userWord(word);
    std::vector<std::string> dict = userWord.fillDictionary();

    Spellcheck::CreateNode* start_node = new Spellcheck::CreateNode;

    for (int i = 0; i < 100; i++){
        userWord.buildTree(start_node, dict[i]);
        if (dict[i] == word){
            std::cout << word << std::endl;
            return 0;
        }
    }

    if (userWord.inDict(start_node, word) == true){
        std::cout << word << std::endl;
    }

    
    return 0;
}
