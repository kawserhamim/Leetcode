class Solution {
public:
    int hamim(vector<vector<int>> &v,vector<vector<int>> &dp, int n , int i, int j)
    {
        if(i >= n)return 0 ;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        int x = hamim(v,dp,n,i+1,j+1);
        int y = hamim(v,dp,n,i+1,j);
        int z = v[i][j] + min(x,y);
        return dp[i][j] = min(dp[i][j],z);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
       int n = triangle.size();
       vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
       int ans = hamim(triangle,dp,n,0,0);
       return ans ;
    }
};