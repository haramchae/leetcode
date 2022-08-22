class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        helper(target, 0, 0, candidates, ans, temp);
        return ans;
    }
    void helper(int target, int depth, int total, vector<int> candidates, vector<vector<int>>& ans, vector<int> temp){
        if(depth > candidates.size()){
            return;
        }  
        if(total == target){
            sort(temp.begin(), temp.end());
            auto check = find(ans.begin(), ans.end(), temp);
            if(check == ans.end()){
               ans.push_back(temp); 
            }
            return;
        }else if(total > target){
            return;
        }
        
        for(int i = depth; i<candidates.size(); i++){
            temp.push_back(candidates[i]);
            total += candidates[i];
            helper(target, i, total, candidates, ans, temp);
            temp.pop_back();
            total -= candidates[i];
            if(i + 1 < candidates.size()){
                temp.push_back(candidates[i+1]);
                total += candidates[i+1];
                helper(target, i+1, total, candidates, ans, temp);
                temp.pop_back();
                total -= candidates[i+1];
            }
            
        }
        
    }
};