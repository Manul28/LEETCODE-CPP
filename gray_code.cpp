class Solution{
public:
      vector<int>gray_code(int n){
        vector<int> ans(1<<n); // that means vector ans has a size of 2^n
        for(int i=0;i<(1<<n);i++){ //that means i will iterate from 0 to 2^n-1
            ans[i]=i^(i>>1)// that basically means i is right shifted by 1 bit that is in short i/2
              // here we are using xor gate to check the difference btw bits
        }
        return ans;
      }
};
