class Solution {
public:
    int climbStairs(int n) {
        // return n+n-1;
        int n1=1;// taking one step
        int n2=1;// taking second step
        for(int i=0;i<n-1;i++){
            int temp=n1;
            n1=n1+n2;
            n2=temp;
        }
        return n1;
    }
};
