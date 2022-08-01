class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        helper(nums, 0, temp);
        return ans;
    }
    
    void helper(vector<int>& nums, int index, vector<int> temp){
        ans.push_back(temp);
        for(int i = index; i < nums.size(); i++){
            temp.push_back(nums[i]);
            helper(nums, i + 1, temp);
            temp.pop_back();
        }
    }
};