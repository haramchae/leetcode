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
    TreeNode *pre, *first, *second;
    void checker(TreeNode* root){
        if(!root) return;
        checker(root->left);
        if(pre && pre->val > root->val){
            if(!first) first = pre;
            second = root;
        }
        pre = root;
        checker(root->right);
    }
    void recoverTree(TreeNode* root) {
        checker(root);
        swap(first->val, second->val);
    }
};
