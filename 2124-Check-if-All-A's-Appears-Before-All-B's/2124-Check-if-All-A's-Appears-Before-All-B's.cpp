class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for(auto c: s){
            if(c == 'b') flag = true;
            if(flag && c == 'a') return false;
        }
        
        return true;
    }
};
