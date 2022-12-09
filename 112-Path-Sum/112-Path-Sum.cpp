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
    bool ans = false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        dfs(root, 0, targetSum);
        return ans;
    }

    void dfs(TreeNode* root, int sum, int targetSum){
        if(!root) return;
        sum+=root->val;
        if(sum==targetSum && !root->left && !root->right){
            ans = true;
            return;
        }
        dfs(root->left, sum, targetSum);
        dfs(root->right, sum, targetSum);
    }

    
};
