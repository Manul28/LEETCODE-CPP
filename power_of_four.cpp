class Solution {
public:
    bool isPowerOfFour(int n) {
        // int x;
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        if(n==0) return false;
        while(n!=1){
          if(n%4!=0){
             return false;
          }
          n/=4;
        }
      return true;
    }
};
/*
  return n>0 && (n&(n-1))==0 && (n&0x55555555);
*/
