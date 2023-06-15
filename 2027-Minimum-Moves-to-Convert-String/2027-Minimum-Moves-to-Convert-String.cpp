class Solution {
public:
    int minimumMoves(string s) {
        int flag = 0, ans = 0;
        for(int i = 0; i<s.size(); i++){
            if(flag <=0 && s[i]=='X'){
                ans++;
                flag = 2;
            }else{
                flag--;
            }
        }
        return ans;
    }
};
