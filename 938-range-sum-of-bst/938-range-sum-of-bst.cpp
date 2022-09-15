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
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        helper(root, low, high);
        return sum;
    }
    
    void helper(TreeNode* current, int low, int high){
        if(!current) return;
        if(current->val <= high && current->val >= low){
            sum+=current->val;
        }
        helper(current->left, low, high);
        helper(current->right, low, high);
    }
};