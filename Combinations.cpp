class Solution{
public:
     vector<vector<int>> combinations(int n,int k){
       ios_base::sync_with_stdio(false);
       cout.tie(NULL);
       cin.tie(NULL);
       vector<vector<int>> subset;
       vector<int> current;
       generatesubset(1,n,current,subset,k);
       return subset;
     }
private:
    void generatesubset(int start,int n,vector<int>& current,vector<vector<int>>& subset,int k){
       if(current.size()==k){
         subset.push_back(current);
         return;
       }
       for(int i=start;i<=n;i++){
         current.push_back(i);
         generatesubset(i+1,n,current,subset,k);
         current.pop_back();
       }
    }
};
