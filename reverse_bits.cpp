class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        uint32_t result;
        for(int i=0;i<32;i++){
            result<<=1;//left shift
            if(n&1) // using logical and gate since n could be 0  or 1
               result++;
            n>>=1; // right shift
        }
        return result;
    }
};
