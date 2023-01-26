class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int ans = 0, count = 0, diff = 0, prevDiff = nums[1]-nums[0];
        for(int i = 1; i<nums.size()-1; ++i){
            diff = nums[i+1] - nums[i];
            if(prevDiff == diff){
                count ++;
            }else{
                prevDiff = diff;
                count = 0;
            }
            ans += count;
        }
        return ans;
    }
};
