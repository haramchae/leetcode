class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue = nums[0] >=0 ? 1 : 1 - nums[0];
        int preSum = startValue;
        for(auto num: nums){
            preSum += num;
            if(preSum <= 0){
                startValue += 1-preSum;
                preSum = 1;
            }
        }
        return startValue;
    }
};
