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
    int rob(TreeNode* root) {
        return helper(root).second;
    }
    pair<int, int> helper(TreeNode* root){
        if(!root) return make_pair(0,0);
        pair<int,int> l = helper(root->left);
        pair<int,int> r = helper(root->right);
        int onlyChild = l.second + r.second;
        int withRoot = max(onlyChild, l.first+r.first+root->val);
        return make_pair(onlyChild, withRoot);
    }
};
