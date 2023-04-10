class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0, lower = 0;
        for(auto c: word){
            if(isupper(c)) upper++;
            else lower++;
        }
        if(upper == word.size() || lower == word.size()) return true;
        if(upper == 1 && isupper(word[0])) return true;
        return false; 
    }
};
