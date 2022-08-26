class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token;
        string ans;
        while(ss>>token){
            reverse(token.begin(), token.end());
            ans += token + " ";
        }
        ans.pop_back();
        return ans;
    }
};