class Solution{
public:
     vector<int> getAbsoluteDifference(vector<int>& nums){
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int leftSum=0,rightSum=0,n=nums.size();
        vector<int> result(n,0);
        for(int i=0;i<n;i++)
           rightSum+=nums[i];
        for(int i=0;i<n;i++){
           result[i]+=((rightSum-nums[i]*(n-i))+(nums[i]*i-leftSum));
           rightSum-=nums[i];
           leftSum+=nums[i];
        }
       return result;
     }
};
