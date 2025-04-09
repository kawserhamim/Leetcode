class Solution {
public:
    int dp[50000][2];
    int hamim(int i, int j, vector<int> &prices, int k) {
        if ( i >= prices.size()) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        int y = 0;
        if (j == 0) {
            int buy = -prices[i]- k + hamim(i + 1, 1, prices,  k);
            int skip = hamim(i + 1, 0, prices, k);
            y = max(buy, skip);
        } else {
            int sell = prices[i] + hamim(i + 1, 0, prices, k);
            int skip = hamim(i + 1, 1, prices,  k);
            y = max(sell, skip);
        }

        return dp[i][j] = y;
    }
    int maxProfit(vector<int>& prices, int fee) {
    memset(dp, -1, sizeof(dp));
    int ans = hamim(0,0,prices,fee);  
    return ans ;      
    }
};