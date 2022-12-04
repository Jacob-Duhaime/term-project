#include <iostream>
#include "spellcheck.h"
#include <string>

int main(){
    std::string word;

    std::cin >> word;

    Spellcheck userWord(word);

    userWord.fillDictionary();

    Spellcheck *start_node = new Spellcheck;

    return 0;
}
