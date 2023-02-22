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

//First solution
// Runtime 8 ms 10.86% Memory 13 MB 5.81%
/**
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }

    void dfs(TreeNode* root, int depth){
        if(!root) return;
        if(depth >= ans.size()) ans.push_back({});
        if(depth%2==1){
            ans[depth].insert(ans[depth].begin(), root->val);
        }else{
            ans[depth].push_back(root->val);
        }
        dfs(root->left, depth+1);
        dfs(root->right, depth+1);
    }
};
**/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root)return v;
        queue<TreeNode*> q;
        q.push(root);
        int depth = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int> t;
            while(size--){
                TreeNode* n = q.front();
                if(depth%2==0){
                    t.push_back(n->val);
                }else{
                    t.insert(t.begin(), n->val);
                }
                q.pop();
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            v.push_back(t);
            depth++;
        }
        return v;
    }    
};

