int speedUp = []
{std::ios::sync_with_stdio(0); std::cin.tie(0); return 0;}();
class Solution{
public:
   bool canJump(vector<int> &nums){
     int finalposition=nums.size()-1;
     for(int idx=nums.size()-2;idx>=0;idx--){
       if(idx+nums[idx]>=finalposition){
          finalpostion=idx;
       }
     }
     return finalposition==0;
   }
};
