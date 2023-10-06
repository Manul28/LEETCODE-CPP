class Solution {
public:
    int integerBreak(int n) {
        // Create a vector to store the maximum product for each integer from 2 to n.
        vector<int> dp(n + 1, 0);
        
        // Initialize base cases.
        dp[2] = 1;
        
        // Calculate the maximum product for each integer from 3 to n.
        for (int i = 3; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                // Find the maximum product when breaking i into j and i-j.
                // dp[i] will store the maximum product for integer i.
                dp[i] = max(dp[i], max(j * dp[i - j], j * (i - j)));
            }
        }
        
        // The result will be stored in dp[n].
        return dp[n];
    }
};
