/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }

    void dfs(TreeNode* root, int depth){
        if(!root) return;
        if(depth >= ans.size()) ans.push_back({});
        if(depth%2==1){
            ans[depth].insert(ans[depth].begin(), root->val);
        }else{
            ans[depth].push_back(root->val);
        }
        dfs(root->left, depth+1);
        dfs(root->right, depth+1);
    }
};
