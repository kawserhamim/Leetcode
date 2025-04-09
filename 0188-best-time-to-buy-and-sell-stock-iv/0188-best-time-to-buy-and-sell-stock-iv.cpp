class Solution {
public:
    
        int dp[1000][2][201];
        int hamim(int i, int j, vector<int> &prices, int x, int k) {
        if (x == k * 2 || i >= prices.size()) return 0;
        if (dp[i][j][x] != -1) return dp[i][j][x];

        int y = 0;
        if (j == 0) {
            int buy = -prices[i] + hamim(i + 1, 1, prices, x + 1, k);
            int skip = hamim(i + 1, 0, prices, x, k);
            y = max(buy, skip);
        } else {
            int sell = prices[i] + hamim(i + 1, 0, prices, x + 1,k);
            int skip = hamim(i + 1, 1, prices, x,k);
            y = max(sell, skip);
        }

        return dp[i][j][x] = y;
    }
    int maxProfit(int k, vector<int>& prices) {
      memset(dp, -1, sizeof(dp));
    int ans = hamim(0,0,prices,0,k);  
    return ans ;      
    }
};