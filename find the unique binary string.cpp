class Solution{
public:
     string findTheBinaryString(vector<int>& nums){
       ios_base::sync_with_stdio(false);
       cout.tie(NULL);
       cin.tie(NULL);
       
       string result;
       int n=result.size();
       for(int i=0;i<n;i++){
         result+=(nums=='0')?'1':'0';
       }
       return result;
     }
};
