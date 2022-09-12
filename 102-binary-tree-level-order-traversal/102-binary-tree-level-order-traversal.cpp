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
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        DFSHelper(root, 0);
        return ans;
    }
    
    void DFSHelper(TreeNode* root, int depth){
        if(!root) return;
        if(depth >= ans.size()) ans.push_back({});
        ans[depth].push_back(root->val);
        DFSHelper(root->left, depth+1);
        DFSHelper(root->right, depth+1);
    }
};