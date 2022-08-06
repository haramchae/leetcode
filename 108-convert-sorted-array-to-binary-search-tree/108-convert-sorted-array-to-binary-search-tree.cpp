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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* ans = helper(nums, 0, nums.size()-1);
        return ans;
    }
    
    TreeNode* helper(vector<int> nums, int start, int last){
        if(start>last){
            return nullptr;
        }
        int middle = start + (last - start)/2;
        TreeNode* ans = new TreeNode();
        ans->val = nums[middle];
        ans->left = helper(nums, start, middle-1);
        ans->right = helper(nums, middle+1, last);
        return ans;
    }
    
    
    
    
};