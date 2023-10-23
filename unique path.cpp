class Solution {
public:
    int uniquePaths(int m, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int> path(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
          path[n-1][i]=1;
        for(int j=0;j<n;j++)
          path[j][m-1]=1;
        for(int j=n-2;j>=0;j--){
          for(int i=m-2;i>=0;i--){
            path[j][i]=path[j][i+1]+path[j+1][i];
          }
        }
      return path[0][0];
    }
};
