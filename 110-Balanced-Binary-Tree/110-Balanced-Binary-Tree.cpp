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
    bool ans = true;
public:
    bool isBalanced(TreeNode* root) {
        DFS(root);
        return ans;
    }

    int DFS(TreeNode* root){
        if(!root) return 0;
        int a = DFS(root->left);
        int b = DFS(root->right);
        if(abs(a-b)>1) ans = false;
        return max(a,b) + 1;
    }
};
