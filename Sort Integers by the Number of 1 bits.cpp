class Solution{
public:
     vector<int> SortByBits(vector<int>& arr){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       sort(arr.begin(),arr.end(),[](int a,int b){
         int countA=__builtin_popcount(a);
         int countB=__builtin_popcount(b);
         return (countA==countB)?(a<b):(countA<countB);
       });
       return arr;
     }
};
