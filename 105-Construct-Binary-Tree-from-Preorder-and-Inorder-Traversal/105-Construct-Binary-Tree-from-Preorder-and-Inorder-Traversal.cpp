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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        return helper(preorder, inorder, index, 0, preorder.size()-1);
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& index, int left, int right){
        if(left>right) return NULL;
        int tempRoot = left;
        while(inorder[tempRoot]!=preorder[index]) tempRoot++;
        index++;
        TreeNode* newNode = new TreeNode(inorder[tempRoot]);
        newNode->left = helper(preorder, inorder, index, left, tempRoot-1);
        newNode->right = helper(preorder, inorder, index, tempRoot+1, right);
        return newNode;
    }
};
