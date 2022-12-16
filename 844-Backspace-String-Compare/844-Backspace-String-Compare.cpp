class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j = 0, k = 0;
        for(int i = 0; i<s.size(); ++i){
            if(s[i]=='#'){
                if(j>0) j--;
            }else{
                s[j]=s[i];
                j++;
            }
        }
        for(int i = 0; i<t.size(); ++i){
            if(t[i]=='#'){
                if(k>0) k--;
            }else{
                t[k]=t[i];
                k++;
            }
        }

        if(j!=k) return false;
        else{
            for(int i = 0; i<j; ++i){
                if(s[i]!=t[i]) return false;
            }
        }
        return true;
    }

};
