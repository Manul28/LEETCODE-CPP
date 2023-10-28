class Solution{
public:
      int hammingweight(uint_32 n){
        int count=0;
        while(n!=0){
          count+=(n%2);//counting the least significant bit
          n>>=1;//right shifting
        }
        return count;
      }
};
