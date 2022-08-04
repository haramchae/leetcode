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
    vector<int> v;
    
    int kthSmallest(TreeNode* root, int k) {
        helper(root, v);
        return v[k-1];
    }
    
    void helper(TreeNode* root, vector<int>& v){
        if(root!=nullptr){
            helper(root->left, v);
            v.push_back(root->val);
            helper(root->right, v);
        }
    }
};