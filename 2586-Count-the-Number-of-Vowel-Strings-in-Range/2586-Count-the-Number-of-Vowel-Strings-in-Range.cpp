class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans = 0;
        for(int i = left; i<=right; ++i){
            if(checker(words[i][0]) && checker(words[i].back())) ans++;
        }
        return ans;
    }
    bool checker(char c){
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};
