class Solution {
public:
    int dp[30000][2];
    int hamim(int i , int j, vector<int>&prices)
    {
      if(i >= prices.size())return 0 ;
      if(dp[i][j] != -1)return dp[i][j];
      int y ;
      if(j == 0)
      {
        y = 0 ;
        int buy = -prices[i] + hamim(i+1,1,prices);
        int bad = hamim(i+1,0,prices);
        y = max(y , max(buy,bad));
      }else{
        y = 0 ;
        int sell = prices[i] + hamim(i + 1 , 0 , prices);
        int bad = hamim(i+1, 1, prices);
        y = max(y, max(sell,bad));
      }
      return dp[i][j] = max(dp[i][j],y);
    }
    int maxProfit(vector<int>& prices) {
    memset(dp, -1, sizeof(dp));
    int ans = hamim(0 , 0 , prices);
    return ans ;
    }
};