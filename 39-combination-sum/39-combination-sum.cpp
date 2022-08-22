class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        helper(target, 0, candidates, ans, temp);
        return ans;
    }
    void helper(int target, int depth, vector<int> candidates, vector<vector<int>>& ans, vector<int> temp){
        if(depth > candidates.size()){
            return;
        }  
        if(accumulate(temp.begin(), temp.end(), 0) == target){
            sort(temp.begin(), temp.end());
            auto check = find(ans.begin(), ans.end(), temp);
            if(check == ans.end()){
               ans.push_back(temp); 
            }
            return;
        }else if(accumulate(temp.begin(), temp.end(), 0) > target){
            return;
        }
        
        for(int i = depth; i<candidates.size(); i++){
            temp.push_back(candidates[i]);
            helper(target, i, candidates, ans, temp);
            temp.pop_back();
            if(i + 1 < candidates.size()){
                temp.push_back(candidates[i+1]);
                helper(target, i+1, candidates, ans, temp);
                temp.pop_back();
            }
            
        }
        
    }
};