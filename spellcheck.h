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
};
