class Solution{
public:
     int findChampion(vector<vector<int>>& grid){
        int res=0,n=grid.size();
        for(int i=0;i<n;i++){
          if(grid[res][i]==0){
            res=i;
          }
        }
       return res;
     }
};
