class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0; i<nums.size(); ++i){
            int minNum = nums[i], maxNum = nums[i];
            for(int j = i; j<nums.size(); ++j){
                minNum = min(minNum, nums[j]);
                maxNum = max(maxNum, nums[j]); 
                ans += maxNum - minNum;
            }
        }
        return ans;
    }
};
