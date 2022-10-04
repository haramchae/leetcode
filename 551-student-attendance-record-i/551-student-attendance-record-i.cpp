class Solution {
public:
    bool checkRecord(string s) {
        int L = 0, A = 0;
        for(int i=0; i<s.size(); i++){
            if(L>2)return false;
            if(s[i]=='P') L = 0;
            else if(s[i]=='L') L++;
            else A++, L=0;
        }
        if(A>1 || L>2){
            return false;
        }
        return true;
    }
};