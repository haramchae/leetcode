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
    int sum = 0;
    public int sumOfLeftLeaves(TreeNode root) {
        helper(root, 0);
        return sum;
    }

    void helper(TreeNode temp, int num){
        if(temp==null) return;
        if((temp.left==null && temp.right==null) && num%2==1){
            System.out.println(temp.val);
            sum += temp.val;
            return;
        } 
        helper(temp.left, 1);
        helper(temp.right, 0);
        
    }
}
