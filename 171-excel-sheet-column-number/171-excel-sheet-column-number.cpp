class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(auto it: columnTitle){
            ans = ans * 26 + (it - 'A') + 1;
        }
        return ans;
    }
};