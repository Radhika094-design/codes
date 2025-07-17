
class Solution {
public:
int change(int amount, vector<int>& coins) {
        int n = coins.size();
        int m = amount;

        vector<vector<unsigned long long>> dp(n+1,vector<unsigned long long>(m+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=m;j++){
                    if(coins[i-1]>j) {
                         dp[i][j] = dp[i-1][j];
                        }
                    else{
                        dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
                        }
                }
        }
    return dp[n][m];
    }
};