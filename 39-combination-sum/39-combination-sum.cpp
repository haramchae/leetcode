class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        helper(target, 0, 0, candidates, ans, temp);
        return ans;
    }
    void helper(int target, int depth, int total, vector<int> candidates, vector<vector<int>>& ans, vector<int> temp){
        if(total > target){
            return;
        }else if(total == target){
            ans.push_back(temp);
            return;
        }
        
        for(int i = depth; i<candidates.size(); i++){
            temp.push_back(candidates[i]);
            total += candidates[i];
            helper(target, i, total, candidates, ans, temp);
            temp.pop_back();
            total -= candidates[i];
        }
        
    }
};