#include <string>
#include <vector>

class Spellcheck{
    private:
        // private parts
        std::string word;
        std::string fileName = "dictionary.txt";
        std::vector<std::string> dictionary;
    public:
        // public parts
        Spellcheck(std::string user_input); //constructor
        void fillDictionary();

        class Spellcheck* branches[256];

        char letter;

        std::string nodeword;

        Spellcheck(){
            letter = NULL;
            nodeword = "";
            for (int i = 0; i < 256; i++){
                branches[i] = NULL;
            }
        }
};
