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
    int ans = 0;
    int distributeCoins(TreeNode* root) {
        helper(root);
        return ans;
    }

    int helper(TreeNode* root){
        if(!root) return 0;
        root->val += helper(root->left);
        root->val += helper(root->right);
        int temp = root->val -1;
        ans += abs(temp);
        return temp;
    }
};
