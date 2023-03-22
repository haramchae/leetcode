class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int temp = 1, ans = 1;
        for(int i = 1; i<nums.size(); ++i){
            if(nums[i]>nums[i-1]){
                temp++;
                ans = max(ans, temp);
            }else{
                temp = 1;
            }
        }
        return ans;
    }
};
