class Solution {
public:
    int longestPalindrome(string s) {
        int odd = 0;
        for(char c = 'A'; c<='z'; ++c){
            odd+= count(s.begin(), s.end(), c) & 1;
        }
        if(odd>0){
            odd -= 1;
        }
        return s.size() - odd;
    }
};
