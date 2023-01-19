class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int preSum = 0, maxNum = INT_MIN;
        for(int i = 0; i<nums.size(); ++i){
            preSum += nums[i];
            maxNum = max(preSum, maxNum);
            if(preSum<0){
                preSum = 0;
            }
        }
        return maxNum;
    }
};
