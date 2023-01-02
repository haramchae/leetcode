class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = 0;
        for(auto it: nums){
            if(len == 0 || nums[len-1] < it) nums[len++] = it;
            else *lower_bound(nums.begin(), nums.begin()+len, it) = it; 
        }
        return len;
    }
};
