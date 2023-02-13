class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        if(n<3) return n;
        vector<vector<int>> dp(n, vector<int>(1001, 0));
        for(int i = 0; i<n; ++i){
            for(int j = i+1; j<n; j++){
                int dif = nums[j] - nums[i] + 500;
                dp[j][dif] = max(2, dp[i][dif]+1);
                ans = max(ans, dp[j][dif]);
            }
        }
        return ans;
    }
};
