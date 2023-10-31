class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=pref.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i]=pref[i];
            }
            else{
                ans[i]=pref[i]^pref[i-1];
            }
        }
        return ans;
    }
};
/*
  a^0=1
  a^a=0
  it means associative and commutative property of xor gate
*/
// 0101
//+0111
//-----
// 0010
//-----
