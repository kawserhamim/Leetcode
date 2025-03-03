class Solution {
public:
    int hamim(int n, vector<int>& dp) {
        if (n == 0)
            return 1;
        if (n < 0)
            return 0;

        if (dp[n] != -1)
            return dp[n];

        // long sum = 0 ;
        dp[n] = hamim(n - 1, dp) + hamim(n - 2, dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        int bonmala = hamim(n, dp);
        // cout<<bonmala<<endl;
        return bonmala;
    }
};