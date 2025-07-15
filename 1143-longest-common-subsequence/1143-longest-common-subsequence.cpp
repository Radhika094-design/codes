class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0)); // 0 bcz initalise with 0 
        for(int i = 1;i<=n;i++){ // 1 bcz 0 is already initalise
            for(int j = 1;j<=m;j++){
                if(text1[i-1]==text2[j -1]){ //check diganolly
                    dp[i][j] = dp[i - 1][j - 1]+1;
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j - 1]); //else check right and left 
                }
            }
        }
return dp[n][m];
    }
};