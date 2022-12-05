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
        std::vector<std::string> fillDictionary();
        bool inDict(Spellcheck::CreateNode* start_node, std::string ans);
        void posibilities(Spellcheck::CreateNode* start_node, std::string ans);
        void buildTree(Spellcheck::CreateNode* start_node, std::string segment);

};
