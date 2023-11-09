#pragma GCC optimise("03")
class Solution{
public:
   int countHomogeneous(string s){
     ios_base::sync_with_stdio(false);
     cout.tie(NULL);
     cin.tie(NULL);
     int count=0;
     long long res=0;
     for(int i=0;i<s.size();i++){
       if(s[count]=s[i]){
         res+=i-count+1;
       }
       else{
         count=i;
         res+=1;
       }
     }
     return (int)(res%1000000007);
   }
};
/*
  int countHomogeneous(string s){
      long long res=0;
      int r=0;
      for(int i=0;i<s.size();i++){
          for(int j=i;j<s.size();j++){
              if(s[j]!=s[i]){
                  break;
              }
              r++;
          }
        //   r++;
          i=j-1;
          res=res+(r*(r+1))/2;
          r=0;
      } 
      return res%(1000000007);
  }
*/
