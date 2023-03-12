class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0, check = 1;
        for(auto c: s){
            if(c=='*' && check == 1){
                ans++;
            }
            if(c=='|'){
                check ^= 1;
            }
        }
        return ans;
    }
};
