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
    vector<int> v;
    bool isCousins(TreeNode* root, int x, int y) {
        DFS(root, x, y, 0, root->val);
        return (v[0]==v[2]&&v[1]!=v[3]);
    }
    
    void DFS(TreeNode* root, int x, int y, int index, int parent){
        if(!root) return;
        DFS(root->left, x, y, index+1, root->val);
        if(x==root->val || y==root->val){
            v.push_back(index);
            v.push_back(parent);
        }
        DFS(root->right, x, y, index+1, root->val);
    }
};
