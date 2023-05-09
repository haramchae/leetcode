class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, cur = 0;
        for(int i = 0; i<nums.size(); ++i){
            if(nums[i]==1) cur++;
            else{
                ans = max(ans, cur);
                cur = 0;
            }
        }
        ans = max(ans, cur);
        return ans;
    }
};
