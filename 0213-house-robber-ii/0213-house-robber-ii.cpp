class Solution {
public:
    int rob(vector<int>& nums) {
     int n = nums.size();
     if(n ==1)return nums[0];
     int x = nums[0];
     int y = nums[n-1];
     nums[0] = 0 ;
     vector<int>dp(n+1,-1);
     dp[0] = nums[0];
     dp[1] = max(nums[0],nums[1]);
     for(int i =2 ; i < n ; i++)
     {
        dp[i] =  max(dp[i-1],dp[i-2]+nums[i]);
     }
     int z = max(dp[n-1],dp[n-2]);
      nums[0] = x ;
      nums[n-1] = 0 ;
      vector<int>dpp(n+1,-1);
     dpp[0] = nums[0];
     dpp[1] = max(nums[0],nums[1]);
     for(int i =2 ; i < n ; i++)
     {
        dpp[i] =  max(dpp[i-1],dpp[i-2]+nums[i]);
     }
     int a = max(dpp[n-1],dpp[n-2]);
     return max(dp[n-1],dpp[n-1]);
    }
};