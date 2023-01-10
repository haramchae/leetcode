class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto it: s){
            if(isalpha(it)){
                str += tolower(it);
            }else if(isdigit(it)){
                str += it;
            }
        }
        cout<<str;
        string reverseStr = str;
        reverse(reverseStr.begin(), reverseStr.end());
        return str == reverseStr;
    }
};
