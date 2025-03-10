class Solution {
public:
    int hamim (int n, vector<vector<int>> &dp, string &s, int i, int j)
    {
       if(i > j)return 0 ;
       if(dp[i][j] != INT_MAX)return dp[i][j];
      // int x = 0 , y = 0 ;
       if(s[i]!=s[j])
       return  dp[i][j] = 1 + min(hamim(n,dp,s,i+1,j),hamim(n,dp,s,i,j-1));
       else  return dp[i][j] = hamim(n,dp,s,i+1,j-1);
      
    }
    int minInsertions(string s) {
    int n = s.size();
    vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
    int ans = hamim(n,dp,s,0,n-1);
   // if(ans == INT_MAX)return 0 ;
    return ans  ;
    }
};