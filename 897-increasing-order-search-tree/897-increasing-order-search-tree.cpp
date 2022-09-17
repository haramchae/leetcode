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
    TreeNode* check = new TreeNode();
    TreeNode* ans = check;
    TreeNode* increasingBST(TreeNode* root) {
        helper(root);
        return ans->right;
    }
    
    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        TreeNode* temp = new TreeNode(root->val);
        check->right = temp;
        check=check->right;
        helper(root->right);
    }
};