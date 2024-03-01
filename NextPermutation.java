class Solution{
  public static void Permutation(int []nums){
     int n=nums.length;
     int index=-1;
     for(int i=n-2;i>=0;i--){
       if(nums[i]<nums[i+1]){
          index =i;
          break;
         
       }
     }
     if(index==-1){
        reverse(nums,0,n);
       return;
     }
     for(int i=n-1;i>index;i--){
        int temp=nums[i];
        nums[i]=nums[index];
        nums[index]=temp;
        break;
     }
     return reverse(nums,index+1,n);
  }
  public static void reverse(int []nums,int start,int end){
    for(int i=start,j=end-1;i<j;i++,j--){
       int temp=nums[i];
       nums[i]=nums[j];
       nums[j]=temp;
    }
  }
}
