class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        for(int i = 0; i<s.size(); ++i){
            if(k==0) break;
            if(s[i]==' '){
                k--;
                if(k==0) break;
            }
            ans += s[i];
        }
        return ans;
    }
};
