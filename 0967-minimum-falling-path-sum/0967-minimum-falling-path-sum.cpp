class Solution {
public:
        int hamim(vector<vector<int>> &v,vector<vector<int>> &dp, int n , int i, int j)
        {
            if(i >= n) return 0 ;
            if(dp[i][j]!=INT_MAX)return dp[i][j];
            if(j == 0 and j == n - 1)
            {
                int x = hamim(v,dp,n,i+1,j);
                int y = x + v[i][j];
                return dp[i][j] = min(dp[i][j],y);
            }else if(j == 0)
            {
                int x = hamim(v,dp,n,i+1,j);
                int y = hamim(v,dp,n,i+1,j+1);
                int z = min(x,y);
                int a = z + v[i][j];
                return dp[i][j] = min(dp[i][j],a);
            }else if(j == n - 1)
            {
                int x = hamim(v,dp,n,i+1,j);
                int y = hamim(v,dp,n,i+1,j-1);
                int z = min(x,y);
                int a = z + v[i][j];
                return dp[i][j] = min(dp[i][j],a);
            }else{
                int x = hamim(v,dp,n,i+1,j);
                int y = hamim(v,dp,n,i+1,j-1);
                int w = hamim(v,dp,n,i+1,j+1);
                int z = min(x,min(y,w));
                int a = z + v[i][j];
                return dp[i][j] = min(dp[i][j],a);
            }

        }
    int minFallingPathSum(vector<vector<int>> &matrix) {
        int n = matrix.size();
       vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
       int ans = INT_MAX;
        for(int i = 0 ; i < n ; i++)
        {
        ans = min(ans,hamim(matrix,dp,n,0,i));
        }
       return ans ;
    }
};