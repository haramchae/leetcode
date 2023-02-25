class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int ans = 1;
        sort(coins.begin(), coins.end());
        for(auto coin: coins){
            if(coin>ans) break;
            ans += coin;
        }
        return ans;
    }
};
