#include <string>
#include <vector>

class Spellcheck{
    private:
        // private parts
        std::string word;
        std::string fileName = "dictionary.txt";
    public:
        // public parts
        struct CreateNode{
            CreateNode* branch[256];
            bool flag;
            CreateNode(){
                for (int i = 0; i < 256; i++){
                    branch[i] = NULL;
                }

                flag = false;
            }
        };
        Spellcheck(std::string user_input); //constructor
        //vector to fill the dictionary
        std::vector<std::string> fillDictionary();
        //boolean to see if the word is in the dictionary that we provided
        bool inDict(Spellcheck::CreateNode* start_node, std::string ans);
        //function to find the posibilities of the words
        void posibilities(Spellcheck::CreateNode* start_node, std::string ans);
        //builds the trie that will search for the word in the dictionary database
        void buildTree(Spellcheck::CreateNode* start_node, std::string segment);

};
