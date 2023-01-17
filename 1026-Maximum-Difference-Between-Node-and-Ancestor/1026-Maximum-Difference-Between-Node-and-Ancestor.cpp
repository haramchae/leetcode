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
    int maxVal = 0;
    int maxAncestorDiff(TreeNode* root) {
        dfs(root, root->val, root->val);
        return maxVal;
    }

    void dfs(TreeNode* root, int high, int low){
        if(!root) return;
        high = max(high, root->val);
        low = min(low, root->val);
        maxVal = max(abs(high-low), maxVal);
        dfs(root->left, high, low);
        dfs(root->right, high, low);
    }
};
