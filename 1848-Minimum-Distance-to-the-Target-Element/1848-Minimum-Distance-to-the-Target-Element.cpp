class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int> v;
        int ans = INT_MAX;
        for(int i = 0; i<nums.size(); ++i){
            if(nums[i] == target){
                int temp = abs(i-start);
                ans = min(ans, temp);
            }
        }
        return ans;
    }
};
