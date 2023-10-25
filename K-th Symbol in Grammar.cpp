#pragma GCC optimize("03")
class Solution{
public:
    int kthGrammar(int n,int k){
      if(k==1) return 0;
      int bl=31-__builtin_clz(k);
      if(k==(1<<bl)){
        return bl&1;
      }
      else{
        //invert the grammar symbol
        return kthGrammar(n,k-(1<<bl));
      }
    }
};
