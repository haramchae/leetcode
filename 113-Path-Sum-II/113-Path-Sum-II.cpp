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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        helper(root, targetSum, 0, temp);
        return ans;
    }

    void helper(TreeNode* root, int targetSum, int sum, vector<int> temp){
        if(!root) return;
        sum += root->val;
        temp.push_back(root->val);
        if(sum==targetSum && root->left==nullptr && root->right==nullptr) ans.push_back(temp);
     
        helper(root->left, targetSum, sum, temp);
        helper(root->right, targetSum, sum, temp);
    }
};
