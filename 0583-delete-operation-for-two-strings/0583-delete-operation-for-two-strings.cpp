class Solution {
public:
    int hamim (vector<vector<int>> &dp, int n, int m, int i, int j, string &s, string &ss )
    {
        if(i >= n || j >= m)return 0 ;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i] == ss[j])
        {
          return dp[i][j] = 1 + hamim(dp,n,m,i+1,j+1,s,ss);
        }
        return dp[i][j] =0 +  max(hamim(dp,n,m,i+1,j,s,ss),hamim(dp,n,m,i,j+1,s,ss));
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int ans = hamim(dp,n,m,0,0,word1,word2);
     //   int z = max(n,m);
        return (n+m-ans-ans) ;
    }
};