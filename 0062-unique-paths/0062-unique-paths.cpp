class Solution {
public:
    int hamim(int m, int n, vector<vector<int>> &dp, int i, int j) {
    if(j >= n or i >= m)return 0 ; 
    if(i == m - 1 and j == n - 1)return 1 ;
    if(dp[i][j]!=-1)return dp[i][j];
   // dp[i][j] = 0 ;
    dp[i][j] = hamim(m,n,dp,i+1,j) + hamim(m,n,dp,i,j+1) ;
    
    return dp[i][j];
}
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m,vector<int>(n,-1));
       int ans = hamim(m,n,dp,0,0);
       return ans ;    
    }
};