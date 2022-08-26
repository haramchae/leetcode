class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        return max(helper(nums, 0, nums.size()-2), helper(nums, 1, nums.size()-1));
    }
    
    int helper(vector<int> nums, int start, int last){
        int prv = 0, prv2 = 0, cur = 0;
        for(int i = start; i<=last; i++){
            cur = max(nums[i]+prv2, prv);
            prv2 = prv;
            prv = cur;
        }
        return cur;
    }
};