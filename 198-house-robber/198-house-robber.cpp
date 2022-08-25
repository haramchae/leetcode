class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> ans(nums.size() + 3);
        for(int i = nums.size() - 1; i>=0; i--){
            ans[i] = nums[i] + max(ans[i+2], ans[i+3]);
        }
        
        return max(ans[0], ans[1]);
    }
};