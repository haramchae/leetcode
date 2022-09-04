/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans = NULL;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        DFS(original, cloned, target);
        return ans;
    }
    
    void DFS(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(original == NULL) return;
        if(original == target){
            ans = cloned;
        }
        DFS(original->left, cloned->left, target);
        DFS(original->right, cloned->right, target);
    }
};