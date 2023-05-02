class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        return nums[size-1]*nums[size-2] - nums[0]*nums[1];
    }
};
