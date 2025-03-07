class Solution {
public:
     bool hamim(vector<int> &arr, vector<vector<int>> &dp, int i , int j, int n)
  {
      if(j == 0) return 1;  // If sum is 0, subset exists
      if(i >= n || j < 0) return 0;  // If out of bounds, return false
      if(dp[i][j] != -1) return dp[i][j]; // Memoization check
      
      bool jj = false;
      if(j - arr[i] >= 0) {
          jj = hamim(arr, dp, i+1, j - arr[i], n);  // Include element
      }
      bool kk = hamim(arr, dp, i+1, j, n);  // Exclude element
      
      return dp[i][j] = jj || kk;  // Store and return result
  }
    bool canPartition(vector<int>& nums) {
        int ans = 0 ;
        int n = nums.size();
    for(int i = 0 ; i < nums.size() ; i++)
    {
       ans += nums[i];
    }    
    if(ans % 2) return false ;
    ans /= 2 ;
    vector<vector<int>> dp(n, vector<int>(ans + 1, -1));  // Correct DP table initialization
      return hamim(nums, dp, 0, ans, n);
    }
};