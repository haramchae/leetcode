/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    TreeNode ans = new TreeNode();
    public TreeNode searchBST(TreeNode root, int val) {
        dfs(root, val);
        if(ans.val == 0) return null;
        return ans;
    }

    void dfs(TreeNode root, int val){
        if(root!=null){
             if(root.val == val){
            ans = root;
            return;
            }
            dfs(root.left, val);
            dfs(root.right, val);
        }
    }
}
