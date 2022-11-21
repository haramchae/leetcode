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
    int minValue = Integer.MAX_VALUE;
    Integer prevValue = null;
    public int getMinimumDifference(TreeNode root) {
        if(root == null) return 0;
        getMinimumDifference(root.left);
        if(prevValue != null){
            minValue = Math.min(minValue, root.val - prevValue);
        }
        prevValue = root.val;
        getMinimumDifference(root.right);
        return minValue;
    }
}
