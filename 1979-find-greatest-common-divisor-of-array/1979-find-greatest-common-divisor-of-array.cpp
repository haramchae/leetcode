class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int small = nums[0], large = nums[nums.size()-1];
        for(int i = 1; i<=small; i++){
            if(small%i == 0 && large%i == 0){
                ans = i;
            }
        }
        return ans;
    }
};