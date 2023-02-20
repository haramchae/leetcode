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
    int findBottomLeftValue(TreeNode* root) {
        int ans = 0, maxIndex = -1;
        dfs(root, ans, maxIndex, 0);
        return ans;
    }

    void dfs(TreeNode* root, int& ans, int& maxIndex, int index){
        if(!root) return;
        if(maxIndex<index){
            maxIndex = index;
            ans = root->val;
        }
        dfs(root->left, ans, maxIndex, index+1);
        dfs(root->right,  ans, maxIndex, index+1);
    }
};
