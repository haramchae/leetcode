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
    int index = 0;
    TreeNode* bstToGst(TreeNode* root) {
        inorderHelper(root);
        sumHelper(v);
        helper(root);
        return root;
    }
    
    void inorderHelper(TreeNode* root){
        if(!root) return;
        inorderHelper(root->left);
        v.push_back(root->val);
        inorderHelper(root->right);
    }
    
    void sumHelper(vector<int>& v){
        for(int i = v.size()-2; i>=0; i--){
            v[i] += v[i+1];
        }
    }
    
    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        root->val = v[index++];
        helper(root->right);
    }
    
    
};