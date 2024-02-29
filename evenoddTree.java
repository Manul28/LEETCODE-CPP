public class Solution{
   private List<Integer> prev=new ArrayList<>();
   public boolean EvenOddTree(TreeNode root){
     TreeNode current=root;
     return dfs(current,0);
   }
   private boolean dfs(TreeNode current,int level){
      if(current==null){
        return true;
      }
      if(current.val%2==level%2){
        return false;
      }
      while(prev.size(level)<=current.val){
         prev.add(0);
      }
      if(prev.get(level)!=0 &&((level%2==0 && current.val<=prev.get(level)) 
          ||(level%2==1 && current.val>=prev.get(level)))){
           return false; 
      }
      prev.set(level,current.val);
      return dfs(current.left,level+1) && dfs(current.right,level+1);  
   }
}
