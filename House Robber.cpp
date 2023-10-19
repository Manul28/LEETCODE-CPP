class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2){
            return nums[0];
        }
        vector<int> dp(nums.size());
        dp[0]=nums[0];// first position
        dp[1]=max(nums[0],nums[1]); // find the maximum loot from first and second house 
        for(int i=2;i<nums.size();i++){
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
            // total loot of nth house=max(total loot[n-2]+loot[n],total loot[n-1]);
        }
        return dp[nums.size()-1];
    }
};
