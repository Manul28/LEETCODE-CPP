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
    public int rob(TreeNode root) {
        int []option=travel(root)
        return Math.max(option[0],option[1]);
    }
    private int [] travel(TreeNode root){
      if(root==null)
          return new int[2];
      int left_Node=travel(root.left);
      int right_Node=travel(root.right);
      //creating option as a choice
      int []options=new int [2];
      //store the loot house list
      options[0]=root.val+left_Node[1]+right_Node[1];
      // store the houses which are skipped
      options[1]=Math.max(left_Node[0],left_Node[1])+Math.max(right_Node[0],right_Node[1]);

      return options;
    }
}
