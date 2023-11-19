class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=nums.size()-2;i>=0;i--){
             if(nums[i]==nums[i+1]){
                 continue;
             }
             else{
                 ans=ans+(nums.size()-i-1);
             }
        }
        return ans;
    }
};
