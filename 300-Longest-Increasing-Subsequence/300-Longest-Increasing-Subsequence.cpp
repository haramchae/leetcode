class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size(), ans = 1;
        vector<int> dp(size, 1);
        for(int i = 0; i<size; ++i){
            for(int j = 0; j<i; ++j){
                if(nums[i]>nums[j]){
                    dp[i] = max(dp[i], dp[j]+1);
                    ans = max(ans, dp[i]);
                }
            }
        }
        return ans;
    }
};
