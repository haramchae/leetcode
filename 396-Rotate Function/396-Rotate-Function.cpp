class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0, pre = 0;
        for(int i = 0; i<nums.size(); ++i){
            pre += nums[i]*i;
            sum += nums[i];
        }
        int maxNum = pre;
        for(int i = nums.size()-1; i>=0; --i){
            pre = pre + sum - (nums[i]*nums.size());
            maxNum = max(pre, maxNum);
        }
        return maxNum;
    }
};
