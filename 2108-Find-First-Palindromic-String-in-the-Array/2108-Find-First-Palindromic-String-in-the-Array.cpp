class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s = "";
        for(auto word: words){
            string temp = word;
            reverse(temp.begin(), temp.end());
            if(temp == word){
                s = word;
                break;
            }
        }
        return s;
    }
};
