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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }
    
    TreeNode* helper(vector<int>& nums, int start, int last){
        if(last<start) return NULL;
        int max_idx = max_element(nums.begin()+start, nums.begin()+last+1) - nums.begin();
        TreeNode* temp = new TreeNode(nums[max_idx]);
        temp->left = helper(nums, start, max_idx-1);
        temp->right = helper(nums, max_idx+1, last);
        return temp;
    }
    
};