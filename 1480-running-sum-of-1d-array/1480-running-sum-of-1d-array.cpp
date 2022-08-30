class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                ans[j]+=nums[i];
            }
        }
            return ans;
    }
};