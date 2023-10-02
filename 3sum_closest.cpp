class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         // this is for code optimisation
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
         cout.tie(NULL);
        
         if(nums.size()<3){
             return 0;
         }
         sort(nums.begin(),nums.end());
         int resultsum=nums[0]+nums[1]+nums[2];// assigning the first three values
         int diff=INT_MAX;
      // INT_MAX=99999
         for(int i=0;i<nums.size()-2;i++){
            // using two pointer approach over here
             int left=i+1;
             int right=nums.size()-1;
             while(right>left){
                 int sum=nums[i]+nums[left]+nums[right];
                 if(sum==target){
                     return target;
                 }
                 else if(sum<target){
                     left++;
                 }
                 else{
                     right--;
                 }
                 // this is to check the diff of the sum and target value
                 int difftarget=abs(sum-target);
                 if(difftarget<diff){
                     //to update the value
                     resultsum=sum;
                     diff=difftarget;
                 }
             }
         }
         return resultsum;
    }
};
