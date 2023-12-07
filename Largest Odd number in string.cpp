class Solution{
public:
     string oddString(string num){
       ios_base::sync_with_stdio(false);
       cout.tie(NULL);
       cin.tie(NULL);
       string res="";
       for(int i=num.length()-1;i>=0;i--){
         if((num[i]-'0')%2==1){//to check the odd string in the given string 
           // we can use (nums[i]-'0')&1 to check the LSB since it is 1
           // '0'- 48  '5'- 53  '9'-57
            return num.substr(0,i+1);
         }
       }
       return res;
     }
};
