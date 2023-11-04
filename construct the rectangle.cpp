class Solution{
public:
      vector<int> constructrectangle(int area){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int s=int(sqrt(area));
        while(area%s!=0) s--;
        return {area/s,s};
      }
};
