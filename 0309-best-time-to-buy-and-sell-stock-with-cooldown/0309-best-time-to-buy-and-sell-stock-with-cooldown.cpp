class Solution {
public:
    int dp[5001][2];

    int solve(int day, bool canBuy, vector<int>& prices) {
        if (day >= prices.size()) return 0;
        if (dp[day][canBuy] != -1) return dp[day][canBuy];

        if (canBuy) {
            int buy = -prices[day] + solve(day + 1, false, prices);
            int skip = solve(day + 1, true, prices);
            return dp[day][canBuy] = max(buy, skip);
        } else {
            int sell = prices[day] + solve(day + 2, true, prices);
            int skip = solve(day + 1, false, prices);
            return dp[day][canBuy] = max(sell, skip);
        }
    }

    int maxProfit(vector<int>& prices) {
        memset(dp, -1, sizeof(dp));
        return solve(0, true, prices);
    }
};
