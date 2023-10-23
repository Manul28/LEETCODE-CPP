class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // the below line means that it will remove all the duplicate number from vector
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        reverse(nums.begin(),nums.end());
        if(nums.size()<3) return nums[0];
        return nums[2];
    }
};
