class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int ans = nums[0], best =  nums[0];
    int i = 1 ;
    int n = nums.size();
    while(i < n)
    {
      if(ans + nums[i] < nums[i])ans = nums[i];
      else ans = ans + nums[i];
      best = max(ans,best);
      i++;
    } 
    return best ;
    }
};