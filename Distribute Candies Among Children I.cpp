class Solution {
public:
    int distributeCandies(int n, int limit) {
        int r = 0;
        for (int i = 0; i <= n && i <= limit; ++i) {
            // max(0, n - i - limit) <= x <= min(limit, n - i)
            r += max(min(limit, n - i) - max(n - i - limit, 0) + 1, 0);
            
        }
        return r;
    }
};
