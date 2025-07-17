class Solution {
public:
    int uniquePaths(int m, int n) {
         // in input given m and n means where to reach 

        vector<vector<int>> dp(n + 1, vector<int>(m +1 , 0));

        // First row: only one way to reach (always move right)
        for (int j = 0; j < m; j++) {
            dp[0][j] = 1;
        }

        // First column: only one way to reach (always move down)
        for (int i = 0; i < n; i++) {
            dp[i][0] = 1;
        }

        // Fill the rest of the grid using Leetcode 64 logic
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[n - 1][m - 1]; // Bottom-right corner


    }
};