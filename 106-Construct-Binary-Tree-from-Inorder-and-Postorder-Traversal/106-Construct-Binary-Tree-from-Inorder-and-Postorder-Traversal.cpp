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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int index = inorder.size()-1;
        return helper(inorder, postorder, index, 0, inorder.size()-1);
    }

    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int& index, int left, int right){
        if(left>right) return NULL;
        int tempRoot = left;
        while(inorder[tempRoot]!=postorder[index]) tempRoot++;
        index--;
        TreeNode* newNode = new TreeNode(inorder[tempRoot]);
        newNode->right = helper(inorder, postorder, index, tempRoot+1, right);
        newNode->left = helper(inorder, postorder, index, left, tempRoot-1);
        return newNode;
    }
};
