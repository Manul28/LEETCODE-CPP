class Solution{
public:
   const int MOD=1000000007;
   int reverse(int num){
     int rev=0;
     while(num>0){
       rev=rev*10+num%10;
       num/=10;
     }
     return rev;
   }
   int countNicePair(vector<int>& nums){
     unordered_map<int,int> freq;
     int nicePairs=0;
     // int num;
     for(int num:nums){
        int revNum = reverse(num);
        int diff = num - revNum;
        nicePairs = (nicePairs + freq[diff]) % MOD;
        freq[diff]++;
     }
     return nicePairs;
   }
};
