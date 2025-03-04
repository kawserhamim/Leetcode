class Solution {
public:
    int hamim(vector<vector<int>> &grid, vector<vector<int>> &dp, int i, int j, int n, int m)
    {
        if(i >= n or j >= m)return (INT_MAX) ;
        if(i == n - 1 and j == m-1)return grid[i][j];
        if(dp[i][j] != INT_MAX)return dp[i][j];
        dp[i][j] = INT_MAX;
        int x =  hamim(grid,dp,i+1,j, n, m);
        int y =  hamim(grid,dp,i,j+1, n, m);
      //  int z =  hamim(grid,dp,i+1,j+1, n, m);
        int a = min(x,y);
        dp[i][j] = grid[i][j] + a ;
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        int ans = hamim(grid,dp,0,0, n, m);
        return ans ;
    }
};