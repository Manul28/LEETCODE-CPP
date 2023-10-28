class Solution{
public:
      int hammingweight(uint_32 n){
        int count=0;
        for(int i=0;i<n;i++){
          count+=(n%2);//counting the least significant bit
          n>>1;//right shifting
        }
        return count;
      }
};
