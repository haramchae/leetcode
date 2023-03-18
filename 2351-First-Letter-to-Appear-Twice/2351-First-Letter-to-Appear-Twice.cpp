class Solution {
public:
    char repeatedCharacter(string s) {
        int ary[26] = {0}, i = 0;
        for(; i<s.size(); ++i){
            ary[s[i]-'a']++;
            if(ary[s[i]-'a']==2) break;
        }
        return s[i];
    }
};
