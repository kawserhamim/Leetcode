class Solution {
public:
    int dp[100000][2][5];
    int hamim(int i, int j, vector<int> &prices, int x)
    {
       if(x == 4) return 0 ;
       if(i >= prices.size())return 0 ;
       if (dp[i][j][x] != -1) return dp[i][j][x];
       int y ;
       if(j == 0)
       {
         y = 0 ;
         int buy = -prices[i] + hamim(i + 1, 1, prices, x+1);
         int skip = hamim(i+1, 0 , prices, x);
         y = max(y , max(buy,skip));
       }else{
         y = 0 ;
         int sell = prices[i] + hamim(i + 1, 0 , prices, x+1);
         int skip = hamim(i+1, 1 , prices, x);
         y = max(y , max(sell,skip));
       }
       return dp[i][j][x] = max(dp[i][j][x],y);
    }
    int maxProfit(vector<int>& prices) {
    memset(dp, -1, sizeof(dp));
    int ans = hamim(0,0,prices,0);  
    return ans ;  
    }
};