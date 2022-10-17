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
    map<int, double> m;
    map<int, int> m2;
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        int index = 0;
        helper(root, index);       
        for(int i = 0; i<m.size(); i++){
            ans.push_back(m[i]/m2[i]);
        }
        return ans;
    }
    
    void helper(TreeNode* root, int index){
        if(!root) return;
        m[index] += root->val;
        m2[index] += 1;
        helper(root->left, index+1);
        helper(root->right, index+1);
        return;
    }
};