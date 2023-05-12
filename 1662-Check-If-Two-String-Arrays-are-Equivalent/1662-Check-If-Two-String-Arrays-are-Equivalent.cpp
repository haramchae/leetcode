class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a = "", b = "";
        for(auto word: word1) a += word;
        for(auto word: word2) b += word;
        return a == b;
    }
};
