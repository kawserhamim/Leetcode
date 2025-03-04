class Solution {
public:
int hamim( int n, int m, vector<vector<int>> &dp, int i, int j,vector<vector<int>> & obstacleGrid) {
    
    
    if(j >= m or i >= n)return 0 ;
    
    if(i == n - 1 and j == m - 1)
    {
        
        if( obstacleGrid[i][j] == 1)
        {
          //  cout<<i<<sp<<j<<endl;
            return 0 ;
        }
        else return 1 ;
    }
    if(dp[i][j]!=-1)return dp[i][j];
    if( obstacleGrid[i][j] == 1)return dp[i][j] = 0 ;
   // dp[i][j] = 0 ;
    dp[i][j] = hamim(n,m,dp,i+1,j, obstacleGrid) + hamim(n,m,dp,i,j+1, obstacleGrid) ;
    
    return dp[i][j];
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n =  obstacleGrid.size();
        int m = obstacleGrid[0].size();
         vector<vector<int>>dp(n,vector<int>(m,-1));
         int ans = hamim(n,m,dp,0,0, obstacleGrid);
       return ans ;
    }
};