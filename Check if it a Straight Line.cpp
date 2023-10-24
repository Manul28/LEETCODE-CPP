class Solution{
public:
      bool straightLine(vector<vector<int>> coordinates){
         if(coordinates.size<=2) return 1;
         int x=coordinates[1][0]-coordinates[0][0];
         int y=coordinates[1][1]-coordinates[0][1];
         auto good=[&](vector<int> v)->bool{
           return x*(v[1]-coordinates[1][1])==y*(v[0]-coordinates[1][0]);
         };
         int n=coordinates.size();
         for(int i=1;i<n;i++){
           if(!good(coordinates[i])){
              return false;
           }
         }
        return true;
      }
};
