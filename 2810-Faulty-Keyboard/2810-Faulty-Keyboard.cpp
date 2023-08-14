class Solution {
public:
    string finalString(string s) {
        string t;
        int flag = 1;
        for(int i = 0; i<s.size(); ++i){
            if(s[i]=='i'){
                reverse(t.begin(), t.end());
                continue;
            }
            t.push_back(s[i]);
        }
        return t;
    }
};
