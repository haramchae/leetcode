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
    int ans = 0;
    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return ans;
    }
    
    void helper(TreeNode* root){
        if(!root) return;
        int count = 0;
        int avg = (sumHelper(root, count)/count);
        if(root->val == avg) ans++;
        helper(root->left);
        helper(root->right);
    }
    
    int sumHelper(TreeNode* root, int& count){
        if(!root) return 0;
        count++;
        return sumHelper(root->left,count) + sumHelper(root->right,count) + root->val;
    }
};