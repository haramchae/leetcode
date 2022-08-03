class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "";
        helper(ans, str, n, 0);
        return ans;
    }
    
    void helper(vector<string>& ans, string str, int l, int r){
        if(l == 0 && r == 0){
            ans.push_back(str);
            return;
        }
        if(r>0){
            helper(ans, str+")", l, r - 1);
        }
        if(l>0){
            helper(ans, str+"(", l - 1, r + 1);
        }
    }
};