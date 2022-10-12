class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = 0; i<k; i++){
            ans.push_back(nums[i]);
        }
        
        for(int j = k; j<nums.size(); j++){
            auto min = min_element(ans.begin(),ans.end());
            if(*min < nums[j]){
                ans.erase(min);
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};