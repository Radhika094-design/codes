class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,0);
        dp[0] = 0;
        dp[1] = nums[0];
        for(int i  =2 ; i<=n;i++){   // <=
              dp[i] = max(nums[i - 1] + dp[i - 2], dp[i - 1]);
        }
        return dp[n];
    }
};