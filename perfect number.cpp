class Solution{
public:
   int perfectNumber(int num){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     if(num==1)
        return false;
     int count=1;
     for(int i=2;i<sqrt(num);i++){
       if(num%i==0){
         count+=i+(num/i);
       }  
     }
     return count==num;
   }
};
