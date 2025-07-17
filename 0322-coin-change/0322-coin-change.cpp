class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //unbounded knapsnack problem as we use coin twice 
        //minimum number of coins we need so we initalise the infinte 
        int n = coins.size();
        const int INF = 1e9;
        vector<vector<int>>dp(n+1,vector<int>(amount+1 , INF));
        for(int i = 0 ;i<=n;i++){
            dp[i][0] =  0 ; 
        }
         for(int i = 1 ; i<=n ;i++){
            for(int j = 1 ;j<=amount; j++){
                if(coins[i - 1]>j){
                    dp[i][j] = dp[i - 1 ][j];
                }else{
                    dp[i][j] = min(dp[i-1][j],1 + dp[i][j - coins[i-1]]);

                }
            }
        }
        return dp[n][amount]==INF?-1:dp[n][amount];
        ;
    }
};