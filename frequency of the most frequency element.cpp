class Solution{
public:
    int mostfrequency(vector<int>& nums,int k){
       ios_base::sync_with_stdio(false);
       cout.tie(NULL);
       cin.tie(NULL);

       
       sort(nums.begin(),nums.end());
       int left=0,right=0;
       long res=0,total=0;
       while(right<nums.size()){
         total+=nums[right];
         while(nums[right]*static_cast<long>(right-left+1)>total+k){
           total-=nums[left];
           left+=1;
         }
         res=max(res,static_cast<long>(right-left+1));
         right+=1;
       }
      return static_cast<int> res;
    }
};
/*
 sliding window approach
  -> current_number*(range of the window)> total no. of window + k;
*/
