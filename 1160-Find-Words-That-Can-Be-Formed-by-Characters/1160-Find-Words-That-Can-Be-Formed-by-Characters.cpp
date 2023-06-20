class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> um;
        int ans = 0;
        for(char c: chars){
            um[c]++;
        }
        for(string word: words){
            unordered_map<char, int> tm = um;
            bool checker = true;
            for(char c: word){
                if(tm[c]<=0){
                    checker = false;
                    break;
                }else{
                    tm[c]--;
                }
            }
            if(checker) {
                ans += word.size();
            }
        }
        return ans;
    }
};
