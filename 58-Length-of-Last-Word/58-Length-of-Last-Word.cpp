class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int ans = 0, flag = 1;
        for(char c: s){
            if(!flag && c == ' ') break;
            if(c!=' '){
                ans++;
                flag = 0;
            }
        }
        return ans;
    }
};
