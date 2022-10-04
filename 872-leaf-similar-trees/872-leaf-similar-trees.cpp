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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v, v2;
        return helper(root1, v)==helper(root2, v2);
    }
    
    vector<int> helper(TreeNode* root, vector<int>& v){
        if(!root) return v;
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
            return v;
        }
        
        helper(root->left, v);
        helper(root->right, v);
        return v;
    }
};