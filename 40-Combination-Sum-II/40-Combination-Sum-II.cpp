class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        helper(candidates, ans, temp, 0, target);
        return ans;
    }

    void helper(vector<int>& candidates, vector<vector<int>>& ans, vector<int>& temp, int depth, int target){
      
        if(target==0){
            ans.push_back(temp);
            return;
        }

        for(int i = depth; i<candidates.size(); ++i){
            if(i>depth && candidates[i]==candidates[i-1])
            continue;
            if(candidates[i]>target)
            break;
            temp.push_back(candidates[i]);
            helper(candidates, ans, temp, i+1, target-candidates[i]);
            temp.pop_back();
        }
    }
};
