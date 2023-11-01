class Solution{
public:
    int clumsy(int n){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
      if(n==1)
          return 1;
      if(n==2)
         return 2;
      if(n==3) 
         return 3;
      if(n==4)
         return 4;
      if(n%4==1)
         return n+2;
      if(n%4==2)
        return n+2;
      if(n%4==3)
        return n-1;
      return n+1;
    }
};
