class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                result.push_back(i);
            }
        }
        return result;
    }
};
