class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int left = 0, right = 0;
        vector<int> ans;
        for(int i = 0; i<nums.size(); ++i){
            right += nums[i];
        }
        for(int i = 0; i<nums.size(); ++i){
            right -= nums[i];
            ans.push_back(abs(right-left));
            left += nums[i];
        }
        return ans;
    }
};
