class Solution{
public:
      long long maximumsequence(string text,string pattern){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        long res=0,cnt1=0,cnt2=0;
        for(char& c:text){
          //ending
          if(c==pattern[1]){
            res+=cnt1;
            cnt2++;
          }
          //beginning
          if(c==pattern[0]){
            cnt1++;
          }
        }
        return res+max(cnt1,cnt2);
      }
};
