class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> dpMin(nums);
        vector<int> dpMax(nums);
        int ans = nums[0];
        for(int i = 1; i<nums.size(); ++i){
            dpMin[i] = min({nums[i], nums[i]*dpMin[i-1], nums[i]*dpMax[i-1]});
            dpMax[i] = max({nums[i], nums[i]*dpMin[i-1], nums[i]*dpMax[i-1]});
            ans = max(ans, dpMax[i]);
        } 
        return ans;
    }
};
