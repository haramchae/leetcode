class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxNum = nums[0] + nums[nums.size()-1];
        int left = 1, right = nums.size() - 2;
        while(left<right){
            maxNum = max(maxNum, nums[left++]+nums[right--]);
        }
        return maxNum;
    }
};
