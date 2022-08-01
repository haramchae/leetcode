class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> permute(vector<int>& nums) {
        int size = nums.size() - 1;
        helper(nums, 0, size);
        return ans;
        
    }
    
    void helper(vector<int> &nums, int num, int len){
        if(num == len){
            ans.push_back(nums);
        }
        for(int i = num; i <= len; i++){
            swap(nums[num], nums[i]);
            helper(nums, num + 1, len);
            swap(nums[num], nums[i]);
        }
    }
};