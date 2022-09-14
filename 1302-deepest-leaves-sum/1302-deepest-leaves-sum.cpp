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
    int sum = 0, deepest = 0;
    int deepestLeavesSum(TreeNode* root) {
        helper(root, 0);
        return sum;
    }
    
    void helper(TreeNode* root, int depth){
        if(!root) return;
        if(!root->left && !root->right){
            if(depth > deepest){
                sum = root->val;
                deepest = depth;
            }else if(depth == deepest){
                sum += root->val;
            }
        }
        
        helper(root->left, depth + 1);
        helper(root->right, depth + 1);
    }
};