class Solution {
public:
    int minPairSum(vector<int>& nums) {
       ios_base::sync_with_stdio(false);
       cout.tie(NULL);
       cin.tie(NULL);
       sort(nums.begin(),nums.end());

       int minMaxSum=0;
       for(int i=0;i<nums.size();i++){
           minMaxSum=max(minMaxSum,nums[i]+nums[nums.size()-1-i]);
       } 
       return minMaxSum;
    }
};
