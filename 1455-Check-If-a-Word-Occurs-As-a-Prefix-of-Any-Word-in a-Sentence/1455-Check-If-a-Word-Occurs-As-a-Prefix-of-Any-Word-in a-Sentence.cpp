class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int length = searchWord.size(), i = 1;
        string s;
        stringstream stream(sentence);
        while(stream >> s){
            if(s.compare(0, length, searchWord) == 0){
                return i;
            }
            ++i;
        }
        return -1;
    }
};
