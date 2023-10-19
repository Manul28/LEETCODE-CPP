class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2){
            return nums[0];
        }
        vector<int> skiplast(nums.size()-1);
        vector<int> skipfirst(nums.size()-1);
        for(int i=0;i<nums.size()-1;i++){
           skiplast[i]=nums[i];
           skipfirst[i]=nums[i+1];
        }
        int lootlasthouse=rob1(skiplast);
        int lootfirsthouse=rob1(skipfirst);

        return max(lootlasthouse,lootfirsthouse);
    }
private:
   int rob1(vector<int>& nums){
       if(nums.size()<2){
           return nums[0];
       }
       vector<int> dp(nums.size());
       dp[0]=nums[0];
       dp[1]=max(nums[0],nums[1]);
       for(int i=2;i<nums.size();i++){
           dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
       }
       return dp[nums.size()-1];
   }    
};
