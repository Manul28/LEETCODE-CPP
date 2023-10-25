class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int n=matrix.size();
        // int left=;
        int r1=0;
        int r2=n-1;
        int c1=0;
        int c2=matrix[0].size()-1;
        while(r1<=r2 && c1<=c2){
            //traversing towards right direction
            for(int i=c1;i<=c2;i++){
                result.push_back(matrix[r1][i]);
            }
            r1++;
            //traversing towards downward direction
            for(int i=r1;i<=r2;i++){
                result.push_back(matrix[i][c2]);
            }
            c2--;
            // for(int i=c2;)
            if(r1<=r2){
                //traversing towards left
                for(int i=c2;i>=c1;i--){
                    result.push_back(matrix[r2][i]);
                }

            }
            r2--;
            if(c1<=c2){
                //traversing towards up
                for(int i=r2;i>=r1;i--){
                    result.push_back(matrix[i][c1]);
                }
            }
            c1++;

        }
        return result;
    }
};
