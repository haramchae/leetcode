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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root, ans, 0);
        reverse(ans.begin(), ans.end());
        return ans;
    }

    void levelOrder(TreeNode* root, vector<vector<int>> &ans, int depth){
        if(!root) return;
        if(depth==ans.size()){
            ans.push_back({});
        }
        ans[depth].push_back(root->val);
        levelOrder(root->left, ans, depth+1);
        levelOrder(root->right, ans, depth+1);
    }
};
