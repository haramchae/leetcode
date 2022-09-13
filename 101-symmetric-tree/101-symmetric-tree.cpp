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
    bool isSymmetric(TreeNode* root) {
        bool ans = helper(root->left, root->right);
        return ans;
    }
    
    
    bool helper(TreeNode* l, TreeNode* r){
        if(l == nullptr && r == nullptr) return true;
        else if(l == nullptr || r == nullptr) return false;
        else if(l->val != r->val) return false;
        
        
        return helper(l->left, r->right) && helper(l->right, r->left);
    }
};