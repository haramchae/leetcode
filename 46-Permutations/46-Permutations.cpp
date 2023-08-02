class Solution {
public:
    vector<vector<int>> v;
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0, nums.size()-1);
        return v;
    }

    void helper(vector<int> &nums, int i, int n){
        if(i == n){
            v.push_back(nums);
            return;
        }
        for(int j = i; j<=n; ++j){
            swap(nums[i],nums[j]);
            helper(nums, i+1, n);
            swap(nums[i], nums[j]);
        }
    }
};
