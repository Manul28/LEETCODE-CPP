class Solution {
    public int[][] generateMatrix(int n) {
        int r1=0,r2=n-1;
        int c1=0,c2=n-1;

        int[][] arr=new int[n][n];
        int val=1;
        while(r1<=r2 && c1<=c2){
            //moving left to right
            for(int i=c1;i<=c2;i++){
               arr[r1][i]=val++;
            }
            //moving downwards
            for(int i=r1+1;i<=r2;i++){
                arr[i][c2]=val++;
            }
            //moving right to left and down to up
            if(r1<r2 && c1<c2){
                //condition for right to left
                for(int i=c2-1;i>c1;i--){
                    arr[r2][i]=val++;
                }
                //condition for down to up
                for(int i=r2;i>r1;i--){
                    arr[i][c1]=val++;
                }
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return arr;
    }
}
