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
    vector<vector<int>> v2;
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        helper(root);
        for(int i = 0; i<v2.size(); i++){
            int num = 1;
            int temp = 0;
            for(int j = v2[i].size()-1; j>=0; j--){
                temp = num * v2[i][j];
                ans += temp;
                num *= 2;
            }
            cout<<"\n";
        }
        return ans;
    }
    
    void helper(TreeNode* root){
        if(!root) return;
        v.push_back(root->val);
        if(!root->left && !root->right){
            v2.push_back(v);
            v.pop_back();
            return;
        }
        helper(root->left);
        helper(root->right);
        v.pop_back();
    }
};