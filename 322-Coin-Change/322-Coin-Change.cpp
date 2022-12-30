class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = amount + 1;
        vector<int> dp(n, n);
        dp[0] = 0;
        for(int i = 1; i<n; ++i){
            for(int j = 0; j<coins.size(); ++j){
                if(i<coins[j]) continue;
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }

        return dp[amount]>amount ? -1 : dp[amount];
    }
};
