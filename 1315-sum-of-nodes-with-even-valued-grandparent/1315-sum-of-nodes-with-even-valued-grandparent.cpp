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
    int sum = 0;
    int sumEvenGrandparent(TreeNode* root) {
        helper(NULL, NULL, root);
        return sum;
    }
    
    void helper(TreeNode* GrandP, TreeNode* Parent, TreeNode* current){
        if(!current) return;
        if(GrandP && GrandP->val%2 == 0){
            sum += current->val;
        }
        helper(Parent, current, current->left);
        helper(Parent, current, current->right);
    }
};