class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int> v;
        for(int i = 0; i<nums.size(); ++i){
            if(nums[i] == target){
                v.push_back(i);
            }
        }
        int ans = INT_MAX;
        for(auto it: v){
            int temp = abs(it-start);
            ans = min(ans, temp);
        }
        return ans;
    }
};
