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
    bool isUnivalTree(TreeNode* root) {
        int num = root->val;
        return DFS(root, num);
    }

    bool DFS(TreeNode* root, int num){
        if(!root) return true;
        bool left = true, right = true;
        left = DFS(root->left, num);
        if(root->val!=num) return false;
        right = DFS(root->right, num);
        return left && right;
    }
};
