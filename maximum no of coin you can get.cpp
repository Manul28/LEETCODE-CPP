#pragma GCC optimize("03")
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        sort(piles.begin(),piles.end());
        int ans=0,n=piles.size();
        for(int i=n/3;i<=n-2;i+=2){// n->9 i->3 3<=7 i=5 
            ans+=piles[i];
        }
        return ans;
    }
};
/*
  we will triplet
  Alice-> max no of coin pile
  I-> will take the next max no of coin pile
  Bob-> will pick the last pile from the triplet(i mean the last set or no.)

  [9,8,7,6,5,1,2,3,4] it will have 3 triplet [9,8,7] [6,5,1] [2,3,4]
  ans= 8+5+3=16
  [9,8,7,6,5,4,3,2,1]
  ans=8+5+2=15 
  [9,8,1,7,6,5,4,3,2]
  ans=8+6+3=17
  [9,8,1,7,6,2,5,4,3]
  ans=8+6+4=(18) -> this is optimal and we are getting the maximum answer
  S S S M L M L M L
  Bob-> S S S
  Alice-> L L L
  You -> M M M
*/
