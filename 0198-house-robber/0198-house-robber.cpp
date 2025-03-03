class Solution {
public:
  int hamim(int n,int i , vector<int> &dp, vector<int> nums ){
   if(i == n - 1) return nums[i] ;
   if(n <= i ) return 0 ;
   
   if(dp[i]!=-1)return dp[i] ;

   int x = nums[i] + hamim(n,i+2,dp,nums);
   int y = hamim(n,i+1,dp,nums);
   dp[i] = max(x,y);
   return dp[i] ;  

}
    int rob(vector<int>& nums) {
     int n = nums.size();
      vector<int>dp(n+1,-1);
    int bonmala = hamim(n,0,dp,nums);
   // cout<<bonmala<<endl;   
    return bonmala ;
    }
};