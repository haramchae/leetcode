class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0, leftSum = 0;
        for(auto num: nums) sum += num;
        for(int i = 0; i<nums.size(); ++i){
            if(leftSum == sum - nums[i]) return i;
            leftSum += nums[i];
            sum -= nums[i];
        }
        return -1;
    }
};
