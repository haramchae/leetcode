class Solution {
public:
    int maxPower(string s) {
        int ans = 1;
        for(int i = 0; i<s.size();){
            int j = i + 1;
            while(j<s.size() && s[i]==s[j]){
                j++;
            }
            ans = max(ans, j-i);
            i = j;
        }
        return ans;
    }
};
