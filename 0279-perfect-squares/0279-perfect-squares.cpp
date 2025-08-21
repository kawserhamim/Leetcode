class Solution {
public:
int numSquares(int n) {
   vector<int>v;
   int x = 1 , z = 1;
   while(x<=n)
   {
     v.push_back(x);
     z += 2;
     x += z ;
   }     
   vector<int>dp(n+1,INT_MAX);
   dp[0]=0;
   for (int i = 1 ; i <= n; i++)
   {
    for (int j = 0; j < v.size() ; j++)
    {
       if(i-v[j]>=0 and dp[i-v[j]]!=INT_MAX)
       {
         dp[i]= min(dp[i],dp[i-v[j]]+1);
       }
    }
    
   }
   return dp[n];
}
};